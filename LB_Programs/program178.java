/*
    Input  : 8
    Output : z  y   x   w   v   u   t   s
    Index  : 1  2   3   4   5   6   7   8
    
*/

////////////////////////////////////////////////////////////////////////
//
//  Required Import File
//
////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print pattern
//  Input           :   Integer
//  Output          :   Character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   21/11/2025
//
////////////////////////////////////////////////////////////////////////

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'z';

        for(iCnt = 1; iCnt <= iNo; iCnt++,ch--)
        {
            System.out.printf("%c\t",ch);
        }
        System.out.println();
    }
}// End of Class

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

class program178
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Frequency : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}// End of Main