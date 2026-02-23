// Write a program which accept matrix from user and check whether the matrix is Sparse matrix or not.
// Sparse matrix is a matrix with the majority of its elements equal to zero.

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

    public boolean ChkSparse()
    {
        int i = 0, j = 0;
        int iCount = 0;
        int iTotal = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == 0)
                {
                    iCount++;
                }
            }
        }

        iTotal = iRow * iCol;

        if(iCount >= (iTotal / 2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program5
{
    public static void main(String A[])
    {
        Matrix mobj = new Matrix(4,4);

        mobj.Accept();
        mobj.Display();

        if(mobj.ChkSparse() == true)
        {
            System.out.println("Given matrix is an Sparse Matrix");
        }
        else
        {
            System.out.println("Given matrix is not an Sparse Matrix");
        }
    }
}