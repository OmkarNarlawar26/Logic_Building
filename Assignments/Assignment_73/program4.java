// Write a program which accept matrix from user and check whether the matrix is identity or not.

// Identity matrix is a square matrix with 1's along the diagonal from upper left to lower right and 0's in all other positions.
// If satisfies the structure as explained before then the matrix is calles identity matrix.

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

    public boolean ChkIdentity()
    {
        int i = 0, j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                 // Diagonal element must be 1
                if(i == j && Arr[i][j] != 1)
                {
                    return false;
                }

                // Non diagonal element must be 0
                if(i != j && Arr[i][j] != 0)
                {
                    return false;
                }
            }
        }

        return true;
    }
}

class program4
{
    public static void main(String A[])
    {
        Matrix mobj = new Matrix(4,4);

        mobj.Accept();
        mobj.Display();

        if(mobj.ChkIdentity() == true)
        {
            System.out.println("Given matrix is an Identity Matrix");
        }
        else
        {
            System.out.println("Given matrix is not an Identity Matrix");
        }
    }
}