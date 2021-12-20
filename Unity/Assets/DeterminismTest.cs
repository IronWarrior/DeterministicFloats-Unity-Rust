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
    int count = 100;

    [SerializeField]
    Text output;

    private const string floatInputsFilename = "floatInputs.txt";

    private const string floatResultsFilename = "floatResults.txt";
    private const string dfloatResultsFilename = "dfloatResults.txt";

    private const string errorTextColor = "#FF7575";

    /// <summary>
    /// Randomly generated floats stored as uints separated by newlines. Contains 
    /// all possible kinds of floats, including NaNs.
    /// </summary>
    private StreamReader floatBitsInputReader;

    private StreamWriter floatResultsWriter, dfloatResultsWriter;
    private StreamReader floatResultsReader, dfloatResultsReader;

    private StringBuilder log;

    private long tests, floatErrors, dfloatErrors;

    private void Log(string message)
    {
        if (Application.isPlaying)
        {
            log.AppendLine(message + "\n");
        }

        Debug.Log(message);
    }

    private void LogError(string message)
    {
        if (Application.isPlaying)
        {
            log.AppendLine($"<color={errorTextColor}>{message}</color>" + "\n");
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
        tests = 0;
        floatErrors = 0;
        dfloatErrors = 0;

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

        MulTest(denormalized, denormalized, write, "Denorm * norm");
        MulTest(denormalized, two, write, "Denorm * norm");

        List<uint> floatInputs = new List<uint>();

        while (!floatBitsInputReader.EndOfStream)
        {
            floatInputs.Add(Convert.ToUInt32(floatBitsInputReader.ReadLine()));
        }

        floatBitsInputReader.Close();

        for (int i = 0; i < floatInputs.Count; i++)
        {
            for (int j = i; j < floatInputs.Count; j++)
            {
                MulTest(floatInputs[i], floatInputs[j], write, "Any");
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

        Log($"Tested {tests} operations.");

        if (!write)
        {
            string floatMessage = $"{floatErrors} errors with C# float operations.";

            if (floatErrors > 0)
                LogError(floatMessage);
            else
                Log(floatMessage);

            string dfloatMessage = $"{dfloatErrors} errors with native (Rust) float operations.";

            if (dfloatErrors > 0)
                LogError(dfloatMessage);
            else
                Log(dfloatMessage);
        }

        if (Application.isPlaying)
            output.text = log.ToString();
    }

    private void MulTest(uint a, uint b, bool write, string messagePrefix = "")
    {
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

            if (FloatToBits(resultF) != floatTruth)
            {
                LogError($"{messagePrefix} for float: {GetResultString(a, b, FloatToBits(resultF), floatTruth)}");
                floatErrors++;
            }

            if (resultDF.Bits != dfloatTruth)
            {
                LogError($"{messagePrefix} for dfloat: {GetResultString(a, b, resultDF.Bits, dfloatTruth)}");
                dfloatErrors++;
            }
        }

        tests++;
    }

    private string GetResultString(uint a, uint b, uint result, uint truth)
    {
        return $"result {FloatBitsToVerboseString(result) } != truth {FloatBitsToVerboseString(truth) }\n" +
               $"Inputs: {FloatBitsToVerboseString(a) } * {FloatBitsToVerboseString(b) }";
    }

    private string FloatBitsToVerboseString(uint bits)
    {
        return $"{ BitsToFloat(bits)}f : { Convert.ToString(bits, 2).PadLeft(32, '0')} : {bits}";
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
