/*
    Input : 5
    Output : a  b   c   d   e
    Index :  1  2   3   4   5
    ASCII :  97 98  99  100 101
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

        // int i = 97;
        char ch = 'a';

        for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
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

class program175
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