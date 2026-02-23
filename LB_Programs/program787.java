import java.util.*;

class Martix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Martix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }
}

class program787
{
    public static void main(String A[])
    {
        Martix mobj = new Martix(4,4);
    }
}