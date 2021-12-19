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
    int count = 10000;

    private const string floatInputsFilename = "floatInputs.txt";

    private const string floatResultsFilename = "floatResults.txt";
    private const string dfloatResultsFilename = "dfloatResults.txt";

    private void OnValidate()
    {
        if (generate)
        {
            Generate();

            StreamReader inputsReader = new StreamReader(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));

            Execute(true, inputsReader);

            generate = false;
        }
    }

    // Cannot load files in StreamingAssets directly on Android, so WebRequest is used.
    private IEnumerator Start()
    {
        UnityWebRequest inputsReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));
        yield return inputsReq.SendWebRequest();
        
        StreamReader inputsReader = new StreamReader(new MemoryStream(inputsReq.downloadHandler.data));

        UnityWebRequest floatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatResultsFilename));
        yield return floatReq.SendWebRequest();

        StreamReader floatResultsReader = new StreamReader(new MemoryStream(floatReq.downloadHandler.data));

        UnityWebRequest dfloatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename));
        yield return dfloatReq.SendWebRequest();

        StreamReader dFloatResultsReader = new StreamReader(new MemoryStream(dfloatReq.downloadHandler.data));

        Execute(false, inputsReader, floatResultsReader, dFloatResultsReader);
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

    private void Execute(bool write, StreamReader floatInputsStream, StreamReader floatResultsReader = null, StreamReader dFloatResultsReader = null)
    {
        List<uint> floatInputs = new List<uint>();

        while (!floatInputsStream.EndOfStream)
        {
            floatInputs.Add(Convert.ToUInt32(floatInputsStream.ReadLine()));
        }

        floatInputsStream.Close();

        StreamWriter floatResultsStream = null, dFloatResultsStream = null;

        if (write)
        {
            floatResultsStream = new StreamWriter(Path.Combine("Assets/StreamingAssets", floatResultsFilename));
            dFloatResultsStream = new StreamWriter(Path.Combine("Assets/StreamingAssets", dfloatResultsFilename));
        }

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
                    floatResultsStream.WriteLine(floatResult);
                    dFloatResultsStream.WriteLine(dfloatResult.Bits);

                    Debug.Assert(floatResult == dfloatResult.Bits, 
                        $"Result diff: float {FloatBitsToVerboseString(floatResult) } " +
                        $"!= dfloat {FloatBitsToVerboseString(dfloatResult.Bits) }\n" +
                        $"Inputs: {FloatBitsToVerboseString(floatInputs[i]) } * {FloatBitsToVerboseString(floatInputs[j])}");
                }
                else
                {
                    uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
                    uint dfloatTruth = Convert.ToUInt32(dFloatResultsReader.ReadLine());

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
            floatResultsStream.Close();
            dFloatResultsStream.Close();
        }
        else
        {
            floatResultsReader.Dispose();
            dFloatResultsReader.Dispose();
        }

        StringBuilder log = new StringBuilder();

        log.AppendLine($"Tested {tests} muls.");

        if (!write)
        {
            log.AppendLine($"{floatErrors} errors with floats, {dfloatErrors} with dfloats");
        }

        Debug.Log(log.ToString());

        output.text = write ? "Not done" : log.ToString();
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
