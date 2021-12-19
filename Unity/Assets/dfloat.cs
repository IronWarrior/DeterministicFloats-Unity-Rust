[System.Serializable]
public unsafe struct dfloat
{
    public uint Bits;

    public dfloat(uint bits)
    {
        Bits = bits;
    }

    public override string ToString()
    {
        return AsNonDetermFloat(this).ToString();
    }

    public static dfloat FromNonDetermFloat(float f)
    {
        return new dfloat(*(uint*)&f);
    }

    public static float AsNonDetermFloat(dfloat df)
    {
        return *(float*)&df.Bits;
    }
}
