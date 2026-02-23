// Write a program which accept matrix from user and reverse the content of each column.

import java.util.*;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        int i = 0, j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of Matrix");

        for(i = 0; i < iRow; i++)
        {
            System.out.println("Enter the elements of Row : "+ (i+1));

            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        sobj.close();
    }

    public void Display()
    {
        int i = 0, j = 0;

        System.out.println("Elements of Matrix are : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void ReverseCol()
    {
        int j = 0;
        int temp;

        for(j = 0 ; j < iCol ; j++)
        {
            int start = 0;
            int end = iRow - 1;

            while(start < end)
            {
                temp = Arr[start][j];
                Arr[start][j] = Arr[end][j];
                Arr[end][j] = temp;

                start++;
                end--;
            }
        }
    }
}

class program3
{
    public static void main(String A[])
    {
        Matrix mobj = new Matrix(4,4);

        mobj.Accept();

        System.out.println("Before Reverse");
        mobj.Display();

        mobj.ReverseCol();

        System.out.println("After Reverse");
        mobj.Display();
    }
}