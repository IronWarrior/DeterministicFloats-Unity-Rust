using UnityEngine;
using UnityEngine.UI;

public class DeterminismTest : MonoBehaviour
{
    [SerializeField]
    bool generate;

    [SerializeField]
    Text output;

    [SerializeField]
    int count = 10000;

    [SerializeField]
    float[] floatValues;

    [SerializeField]
    dfloat[] dfloatValues;

    [SerializeField]
    uint checksumFloat, checksumDFloat;

    private void OnValidate()
    {
        if (generate)
        {
            Generate();

            Execute(true);

            generate = false;
        }
    }

    private void Awake()
    {
        Execute(false);
    }

    private void Generate()
    {
        var rand = new System.Random();

        floatValues = new float[count];
        dfloatValues = new dfloat[count];

        for (int i = 0; i < count; i++)
        {
            uint value = (uint)rand.Next(-int.MaxValue, int.MaxValue);

            dfloat d = new dfloat(value);
            float f = dfloat.AsNonDetermFloat(d);

            floatValues[i] = f;
            dfloatValues[i] = d;
        }
    }

    private void Execute(bool writeChecksums)
    {
        ulong tests = 0;
        uint floatsum = 0, dfloatsum = 0;

        for (int i = 0; i < count - 1; i++)
        {
            for (int j = i + 1; j < count; j++)
            {
                float floatResult = floatValues[i] * floatValues[j];
                dfloat d = dfloat.FromNonDetermFloat(floatResult);

                floatsum ^= d.Bits;

                dfloat dfloatResult = Mathd.Mul(dfloatValues[i], dfloatValues[j]);
                dfloatsum ^= dfloatResult.Bits;

                tests++;
            }
        }

        string log = $"Tested {tests} muls.\n" +
            $"Ground truths f: {checksumFloat} df: {checksumDFloat}\n" +
            $"floatsum: {floatsum}\n" +
            $"dfloatsum: {dfloatsum}";

        Debug.Log(log);

        output.text = log;

        if (writeChecksums)
        {
            checksumFloat = floatsum;
            checksumDFloat = dfloatsum;
        }
    }
}
