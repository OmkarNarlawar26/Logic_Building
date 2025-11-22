/* Accept number of rows and columns from user and display below pattern.
 Input : iRow = 4     iCol = 5
 OUTPUT :
            2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
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
        int iCount = 0;
        

        for(i = 1; i <= iRow; i++)
        {
            iCount = 1;

            if((i % 2) == 0)
            {
                iCount = 1;
            }
            else
            {
                iCount = 2;
            }

            for(j = 1; j <= iCol; j++)
            {
                System.out.print(iCount+"\t");
                iCount = iCount + 2;
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

class program2
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