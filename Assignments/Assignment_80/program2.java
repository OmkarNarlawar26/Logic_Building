/*

Design a Java program to determine whether a given square matrix is a Magic Square.
A Magic Square is defined as:
• All row sums are equal.
• All column sums are equal.
• Both diagonal sums are equal.

Input Format:
• First line: Integer N (size of square matrix)
• Next N lines: N integers each

Validations:
• N > 0
• Matrix must be square

Output Format:
Matrix is a Magic Square
OR
Matrix is NOT a Magic Square

*/

import java.util.*;

class program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int R = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int C = sobj.nextInt();

        if(R < 0 || C < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if(R != C)
        {
            System.out.println("Invalid Input : Matrix must be square");
            System.out.println("No. of rows and No. of cloumns must same");
            return;
        }

        int Arr[][] = new int[R][C];
        int i = 0, j = 0;
        int SumRow = 0;
        int SumCol = 0;
        int SumDigl = 0;
        int magicSum = 0;

        System.out.println("Enter Matrix : ");
        for(i = 0; i < R; i++)
        {
            for(j = 0; j < C; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        // First row sum
        for(j = 0; j < C; j++)
        {
            magicSum = magicSum + Arr[0][j];
        }

        // Check row sums
        for(i = 0; i < R; i++)
        {
            int rowSum = 0;
            for(j = 0; j < C; j++)
            {
                rowSum = rowSum + Arr[i][j];
            }

            if(rowSum != magicSum)
            {
                System.out.println("Matrix is NOT a Magic Square");
                return;
            }
        }

        // Check column sums
        for(j = 0; j < C; j++)
        {
            int colSum = 0;
            for(i = 0; i < R; i++)
            {
                colSum = colSum + Arr[i][j];
            }

            if(colSum != magicSum)
            {
                System.out.println("Matrix is NOT a Magic Square");
                return;
            }
        }

        // Diagonal 1
        int diag1 = 0;
        for(i = 0; i < R; i++)
        {
            diag1 = diag1 + Arr[i][i];
        }

        // Diagonal 2
        int diag2 = 0;
        for(i = 0; i < R; i++)
        {
            diag2 = diag2 + Arr[i][R - i - 1];
        }

        if(diag1 != magicSum || diag2 != magicSum)
        {
            System.out.println("Matrix is NOT a Magic Square");
        }
        else
        {
            System.out.println("Matrix is a Magic Square");
        }

        sobj.close();
    }
}