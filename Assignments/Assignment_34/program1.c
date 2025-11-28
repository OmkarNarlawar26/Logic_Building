// Write a program which display ASCII table. Table contains symbol,decimal,Hexadecimal and octal representation of every member from 0 to 225.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayASCII
//  Description     :   Used to print table of ASCII values
//  Input           :   Integer
//  Output          :   ASCII Table
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCount = 0;

    printf("Sym\t, Dec\t, Hex\t, Oct\n");

    for(iCount = 0; iCount <= 225; iCount++)
    {
        printf("%c\t %d\t %X\t %o\n",iCount,iCount,iCount,iCount);
    }

}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}// End of Main
