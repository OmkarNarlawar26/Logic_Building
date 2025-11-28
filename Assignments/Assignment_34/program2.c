// Accept the character from user. If character is small display its corresponding captial character, and if it is capital then display its corresponding small. In other cases display as it is.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to display small char as capital or capital as small or if symbol as                      it is.
//  Input           :   Character
//  Output          :   Character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


void Dislpay(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c",ch);
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
