/* Accept number of rows and columns from user and display below pattern.
 Input : iRow = 5     iCol = 5
 OUTPUT :
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
            1   2   3   4   5
            a   b   c   d   e
*/

////////////////////////////////////////////////////////////////////////
//
//  Required Import File
//
////////////////////////////////////////////////////////////////////////

import java.util.*;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   used to print patterns
//  Input           :   Integer
//  Output          :   Pattern
//  Author          :   Omkar Sachin Narlawar
//  Date            :   22/11/2025
//
////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {
            ch = 'a';

            for(j = 1; j <= iCol; j++)
            {
                if((i % 2) != 0)
                {
                    System.out.print(ch+"\t");
                    ch++;
                }
                else
                {
                    System.out.print(j+"\t");
                }
            }
            System.out.println();
        }
    }
}// End of Class

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

class program3
{
    public static void main(String A[])
    {
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}// End of Main