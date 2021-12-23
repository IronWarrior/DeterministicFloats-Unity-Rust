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
    bool treatAllNaNAlike;

    [SerializeField]
    Text output;

    [SerializeField]
    long logOutputLimit = 100;

    private enum Operator { Add = 0, Sub = 1, Mul = 2, Div = 3 }

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

        Log("Loading test inputs...");
        output.text = log.ToString();

        var stopwatch = new System.Diagnostics.Stopwatch();
        stopwatch.Start();

        yield return StartCoroutine(LoadReaders());

        stopwatch.Stop();

        Log($"Loading inputs/truths duration: {stopwatch.Elapsed.Milliseconds}ms");
        output.text = log.ToString();

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
        var stopwatch = new System.Diagnostics.Stopwatch();

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

        stopwatch.Start();

        // 1.17549421069e-38
        uint largestDenormal = 0x007fffff;
        // 1.14780357213e-41
        uint middleDenormal = 0x00001fff;

        uint pointfive = 0x3f000000;
        uint posInfinity = FloatToBits(float.PositiveInfinity);
        uint negInfinity = FloatToBits(float.NegativeInfinity);

        OpTestAll(0, 0, write, "zero zero");
        OpTestAll(0, pointfive, write, "zero pointfive");

        OpTestAll(largestDenormal, largestDenormal, write, "denorm denorm");
        OpTestAll(largestDenormal, middleDenormal, write, "denorm denorm");
        OpTestAll(largestDenormal, pointfive, write, "denorm norm");
        OpTestAll(pointfive, largestDenormal, write, "norm denorm");
        OpTestAll(pointfive, middleDenormal, write, "norm denorm");
        OpTestAll(0, largestDenormal, write, "zero denorm");
        OpTestAll(largestDenormal, 0, write, "denorm zero");

        OpTestAll(posInfinity, posInfinity, write, "posinf posinf");
        OpTestAll(posInfinity, negInfinity, write, "posinf neginf");
        OpTestAll(negInfinity, posInfinity, write, "neginf posinf");
        OpTestAll(negInfinity, negInfinity, write, "neginf neginf");

        OpTestAll(posInfinity, pointfive, write, "posinf norm");
        OpTestAll(negInfinity, pointfive, write, "neginf norm");
        OpTestAll(pointfive, posInfinity, write, "norm posInfinity");
        OpTestAll(pointfive, negInfinity, write, "norm negInfinity");
        OpTestAll(posInfinity, largestDenormal, write, "posinf denorm");
        OpTestAll(negInfinity, largestDenormal, write, "neginf denorm");

        OpTestAll(0, posInfinity, write, "zero posInfinity");
        OpTestAll(0, negInfinity, write, "zero negInfinity");

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
                OpTestAll(floatInputs[i], floatInputs[j], write, "Any");
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

        if (floatErrors + dfloatErrors > logOutputLimit)
            LogError("(Reached maximum amount of displayable errors.)");

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

        stopwatch.Stop();

        Log($"Arithmetic duration: {stopwatch.Elapsed.Milliseconds}ms");

        if (Application.isPlaying)
            output.text = log.ToString();
    }

    private void OpTestAll(uint a, uint b, bool write, string messagePrefix = "")
    {
        for (int i = 0; i < 4; i++)
        {
            Operator op = (Operator)i;

            OpTest(a, b, op, write, messagePrefix);
        }
    }

    private void OpTest(uint a, uint b, Operator op, bool write, string messagePrefix = "")
    {
        Operate(a, b, op, out float floatResult, out dfloat dfloatResult);

        if (write)
        {
            floatResultsWriter.WriteLine(FloatToBits(floatResult));
            dfloatResultsWriter.WriteLine(dfloatResult.Bits);
        }
        else
        {
            uint floatTruth = Convert.ToUInt32(floatResultsReader.ReadLine());
            uint dfloatTruth = Convert.ToUInt32(dfloatResultsReader.ReadLine());

            bool floatPass = FloatToBits(floatResult) == floatTruth || (treatAllNaNAlike && float.IsNaN(floatResult) && float.IsNaN(BitsToFloat(floatTruth)));
            bool dfloatPass = dfloatResult.Bits == dfloatTruth || (treatAllNaNAlike && float.IsNaN(dfloat.AsNonDetermFloat(dfloatResult)) && float.IsNaN(BitsToFloat(dfloatTruth)));

            if (!floatPass)
            {
                floatErrors++;

                if (floatErrors + dfloatErrors < logOutputLimit)
                    LogError($"{messagePrefix} {op} for float: {GetResultString(a, b, FloatToBits(floatResult), floatTruth)}");
            }

            if (!dfloatPass)
            {
                dfloatErrors++;

                if (floatErrors + dfloatErrors < logOutputLimit)
                    LogError($"{messagePrefix} {op} for dfloat: {GetResultString(a, b, dfloatResult.Bits, dfloatTruth)}");
            }
        }

        tests++;
    }

    private void Operate(uint a, uint b, Operator op, out float floatResult, out dfloat dfloatResult)
    {
        float floatA = BitsToFloat(a);
        float floatB = BitsToFloat(b);

        switch (op)
        {
            case Operator.Add:
                floatResult = floatA + floatB;
                dfloatResult = Mathd.Add(new dfloat(a), new dfloat(b));
                break;
            case Operator.Sub:
                floatResult = floatA - floatB;
                dfloatResult = Mathd.Sub(new dfloat(a), new dfloat(b));
                break;
            case Operator.Mul:
                floatResult = floatA * floatB;
                dfloatResult = Mathd.Mul(new dfloat(a), new dfloat(b));
                break;
            case Operator.Div:
                floatResult = floatA / floatB;
                dfloatResult = Mathd.Div(new dfloat(a), new dfloat(b));
                break;
            default:
                throw new Exception("Unknown operator.");
        }
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
