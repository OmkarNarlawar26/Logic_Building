// Accept the character from user and display its ASCII value in decimal, octal and hexadecimal format.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to displayASCII value in decimal octal and hexadecimal.
//  Input           :   Character
//  Output          :   Character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


void Dislpay(char ch)
{
    if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal : %d\n",ch);
        printf("Octal : %o\n",ch);
        printf("Hexadecimal : %X\n",ch);
    }
    
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Dislpay(cValue);

    return 0;
}// End of Main
