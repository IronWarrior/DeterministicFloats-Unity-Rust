using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DeterminismTest : MonoBehaviour
{
    [SerializeField]
    bool generate;

    [SerializeField]
    Text output;

    [SerializeField]
    int count = 100;

    private const string floatInputsFilename = "floatInputs.txt";

    private const string floatResultsFilename = "floatResults.txt";
    private const string dfloatResultsFilename = "dfloatResults.txt";

    /// <summary>
    /// Randomly generated floats stored as uints separated by newlines. Contains 
    /// all possible kinds of floats, including NaNs and subnormals.
    /// </summary>
    private StreamReader floatBitsInputReader;

    private StreamWriter floatResultsWriter, dfloatResultsWriter;
    private StreamReader floatResultsReader, dfloatResultsReader;

    private StringBuilder log;

    private void Log(string message)
    {
        if (Application.isPlaying)
        {
            log.AppendLine(message);
        }

        Debug.Log(message);
    }

    private void LogError(string message)
    {
        if (Application.isPlaying)
        {
            log.AppendLine(message);
        }

        Debug.LogError(message);
    }

    private void Assert(bool value, string message = null)
    {
        if (value)
            return;

        if (message == null)
            LogError("Assert failed.");
        else
            LogError(message);
    }

    private void OnValidate()
    {
        if (generate)
        {
            Generate();

            floatBitsInputReader = new StreamReader(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));

            Execute(true);

            generate = false;
        }
    }

    // Cannot load files in StreamingAssets directly on Android, so WebRequest is used.
    private IEnumerator Start()
    {
        log = new StringBuilder();

        yield return StartCoroutine(LoadReaders());

        Execute(false);
    }

    private IEnumerator LoadReaders()
    {
        UnityWebRequest inputsReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));
        UnityWebRequest floatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatResultsFilename));
        UnityWebRequest dfloatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename));

        yield return inputsReq.SendWebRequest();
        yield return floatReq.SendWebRequest();
        yield return dfloatReq.SendWebRequest();

        floatBitsInputReader = new StreamReader(new MemoryStream(inputsReq.downloadHandler.data));
        floatResultsReader = new StreamReader(new MemoryStream(floatReq.downloadHandler.data));
        dfloatResultsReader = new StreamReader(new MemoryStream(dfloatReq.downloadHandler.data));
    }

    private void Generate()
    {
        using var floatInputs = new StreamWriter(Path.Combine("Assets/StreamingAssets", floatInputsFilename));

        var rand = new System.Random();

        for (int i = 0; i < count; i++)
        {
            uint value = (uint)rand.Next(-int.MaxValue, int.MaxValue);

            floatInputs.WriteLine(value);
        }
    }

    private void Execute(bool write)
    {
        floatResultsWriter = null;
        dfloatResultsWriter = null;

        if (write)
        {
            floatResultsWriter = new StreamWriter(Path.Combine("Assets/StreamingAssets", floatResultsFilename));
            dfloatResultsWriter = new StreamWriter(Path.Combine("Assets/StreamingAssets", dfloatResultsFilename));
        }

        // 1.17549421069e-38
        uint denormalized = 8388607;
        uint two = 1073741824;

        MulTest(denormalized, denormalized, write, out bool floatPass, out bool dfloatPass);

        Assert(floatPass, "Failed float denormalize.");
        Assert(dfloatPass, "Failed dfloat denormalize.");

        MulTest(denormalized, two, write, out floatPass, out dfloatPass);

        Assert(floatPass, "Failed float denormalize.");
        Assert(dfloatPass, "Failed dfloat denormalize.");

        List<uint> floatInputs = new List<uint>();

        while (!floatBitsInputReader.EndOfStream)
        {
            floatInputs.Add(Convert.ToUInt32(floatBitsInputReader.ReadLine()));
        }

        floatBitsInputReader.Close();

        ulong tests = 0;
        ulong floatErrors = 0, dfloatErrors = 0;

        for (int i = 0; i < floatInputs.Count; i++)
        {
            float aFloat = BitsToFloat(floatInputs[i]);
            dfloat aDFloat = new dfloat(floatInputs[i]);

            for (int j = i; j < floatInputs.Count; j++)
            {
                float bFloat = BitsToFloat(floatInputs[j]);
                dfloat bDFloat = new dfloat(floatInputs[j]);

                uint floatResult = FloatToBits(aFloat * bFloat);
                dfloat dfloatResult = Mathd.Mul(aDFloat, bDFloat);

                if (write)
                {
                    floatResultsWriter.WriteLine(floatResult);
                    dfloatResultsWriter.WriteLine(dfloatResult.Bits);

                    Debug.Assert(floatResult == dfloatResult.Bits, 
                        $"Result diff: float {FloatBitsToVerboseString(floatResult) } " +
                        $"!= dfloat {FloatBitsToVerboseString(dfloatResult.Bits) }\n" +
                        $"Inputs: {FloatBitsToVerboseString(floatInputs[i]) } * {FloatBitsToVerboseString(floatInputs[j])}");
                }
                else
                {
                    uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
                    uint dfloatTruth = Convert.ToUInt32(dfloatResultsReader.ReadLine());

                    if (floatTruth != floatResult)
                    {
                        floatErrors++;

                        Debug.LogError($"Float result diff: res {FloatBitsToVerboseString(floatResult) } != truth {FloatBitsToVerboseString(floatTruth) }\n" +
                            $"Inputs: {FloatBitsToVerboseString(floatInputs[i]) } * {FloatBitsToVerboseString(floatInputs[j]) }");
                    }

                    if (dfloatTruth != dfloatResult.Bits)
                    {
                        dfloatErrors++;

                        Debug.LogError($"DFloat result diff: res {FloatBitsToVerboseString(dfloatResult.Bits)} != truth {FloatBitsToVerboseString(dfloatTruth)}\n" +
                            $"Inputs: {FloatBitsToVerboseString(floatInputs[i]) } * {FloatBitsToVerboseString(floatInputs[j]) }");
                    }
                }

                tests++;
            }
        }

        if (write)
        {
            floatResultsWriter.Close();
            dfloatResultsWriter.Close();
        }
        else
        {
            floatResultsReader.Dispose();
            dfloatResultsReader.Dispose();
        }

        Log($"Tested {tests} muls.");

        if (!write)
        {
            Log($"{floatErrors} errors with floats, {dfloatErrors} with dfloats");
        }

        if (Application.isPlaying)
            output.text = log.ToString();
    }

    private void MulTest(uint a, uint b, bool write, out bool floatPass, out bool dfloatPass)
    {
        floatPass = write;
        dfloatPass = write;

        float resultF = BitsToFloat(a) * BitsToFloat(b);
        dfloat resultDF = Mathd.Mul(new dfloat(a), new dfloat(b));

        if (write)
        {
            floatResultsWriter.WriteLine(FloatToBits(resultF));
            dfloatResultsWriter.WriteLine(resultDF.Bits);
        }
        else
        {
            uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
            uint dfloatTruth = Convert.ToUInt32(dfloatResultsReader.ReadLine());

            floatPass = FloatToBits(resultF) == floatTruth;
            dfloatPass = resultDF.Bits == dfloatTruth;
        }
    }

    private string FloatBitsToVerboseString(uint bits)
    {
        return $"{ BitsToFloat(bits)} : { Convert.ToString(bits, 2).PadLeft(32, '0')} : {bits}";
    }

    private unsafe float BitsToFloat(uint bits)
    {
        return *(float*)&bits;
    }

    private unsafe uint FloatToBits(float f)
    {
        return *(uint*)&f;
    }
}
