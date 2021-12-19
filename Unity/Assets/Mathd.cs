using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

public static class Mathd
{
    //[DllImport("unity_rust")]
    //private static extern uint float_add(uint a, uint b);

    //[DllImport("unity_rust")]
    //private static extern uint float_sub(uint a, uint b);

    [DllImport("unity_rust")]
    private static extern uint float_mul(uint a, uint b);

    //[DllImport("unity_rust")]
    //private static extern uint float_div(uint a, uint b);

    //public static dfloat Add(dfloat a, dfloat b)
    //{
    //    uint bits = float_add(a.Bits, b.Bits);
    //    return new dfloat(bits);
    //}

    //public static dfloat Sub(dfloat a, dfloat b)
    //{
    //    uint bits = float_sub(a.Bits, b.Bits);
    //    return new dfloat(bits);
    //}

    [MethodImpl(MethodImplOptions.NoInlining | MethodImplOptions.NoOptimization | MethodImplOptions.PreserveSig)]
    public static dfloat Mul(dfloat a, dfloat b)
    {
        uint bits = float_mul(a.Bits, b.Bits);
        return new dfloat(bits);
    }

    //public static dfloat Div(dfloat a, dfloat b)
    //{
    //    uint bits = float_div(a.Bits, b.Bits);
    //    return new dfloat(bits);
    //}
}
