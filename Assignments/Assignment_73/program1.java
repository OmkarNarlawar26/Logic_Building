// Write a program which accept matrix from user and Display transpose of the matrix.
// Hint - The Transpose of given matrix is formed by interchanging the rows and columns of a matrix.

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

    public void Transpose()
    {
        int i = 0, j = 0;
        int temp = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = i+1 ; j < iCol ; j++)
            {
                temp = Arr[i][j];
                Arr[i][j] = Arr[j][i];
                Arr[j][i] = temp;
            }
        }
    }
}

class program1
{
    public static void main(String A[])
    {
        Matrix mobj = new Matrix(4,4);

        mobj.Accept();

        System.out.println("Before Transpose");
        mobj.Display();

        mobj.Transpose();

        System.out.println("After Transpose");
        mobj.Display();
    }
}