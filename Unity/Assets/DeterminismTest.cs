using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
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

    private IEnumerator Start()
    {
        UnityWebRequest inputsReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatInputsFilename));
        yield return inputsReq.SendWebRequest();

        MemoryStream inputsMS = new MemoryStream(inputsReq.downloadHandler.data);
        StreamReader inputsReader = new StreamReader(inputsMS);

        UnityWebRequest floatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, floatResultsFilename));
        yield return floatReq.SendWebRequest();

        MemoryStream floatMS = new MemoryStream(floatReq.downloadHandler.data);
        StreamReader floatResultsReader = new StreamReader(floatMS);

        UnityWebRequest dfloatReq = UnityWebRequest.Get(Path.Combine(Application.streamingAssetsPath, dfloatResultsFilename));
        yield return dfloatReq.SendWebRequest();

        MemoryStream dfloatMS = new MemoryStream(dfloatReq.downloadHandler.data);
        StreamReader dFloatResultsReader = new StreamReader(dfloatMS);

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
                        $"Result diff: float {BitsToFloat(floatResult)} : {Convert.ToString(floatResult, 2)} : {floatResult} " +
                        $"!= dfloat {dfloat.AsNonDetermFloat(dfloatResult)} : {Convert.ToString(dfloatResult.Bits, 2)} : {dfloatResult.Bits}\n" +
                        $"Inputs: {floatInputs[i]} : {Convert.ToString(floatInputs[i], 2)} * {floatInputs[j]} : { Convert.ToString(floatInputs[j], 2)}");
                }
                else
                {
                    uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
                    uint dfloatTruth = Convert.ToUInt32(dFloatResultsReader.ReadLine());

                    if (floatTruth != floatResult)
                    {
                        floatErrors++;

                        Debug.LogError($"Float result diff: res {BitsToFloat(floatResult)}:{floatResult} != truth {BitsToFloat(floatTruth)}:{floatTruth}\n" +
                            $"Inputs: {floatInputs[i]} * {floatInputs[j]}");
                    }

                    if (dfloatTruth != dfloatResult.Bits)
                    {
                        dfloatErrors++;

                        dfloat truth = new dfloat(floatTruth);

                        Debug.LogError($"DFloat result diff: res {dfloat.AsNonDetermFloat(dfloatResult)}:{dfloatResult.Bits} != truth {dfloat.AsNonDetermFloat(truth)}:{truth.Bits}\n" +
                             $"Inputs: {floatInputs[i]} * {floatInputs[j]}");
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

        Debug.Log($"Tested {tests} muls.");

        if (!write)
        {
            Debug.Log($"{floatErrors} errors with floats, {dfloatErrors} with dfloats");
        }

        //string log = $"Tested {tests} muls.\n" +
        //    $"Ground truths f: {checksumFloat} df: {checksumDFloat}\n" +
        //    $"floatsum: {floatsum}\n" +
        //    $"dfloatsum: {dfloatsum}";

        //Debug.Log(log);

        output.text = write ? "Not done" : "Done";
    }

    private string FloatBitsToVerboseString(uint bits)
    {
        return $"{ BitsToFloat(bits)} : { Convert.ToString(bits, 2)} : {bits}";
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
