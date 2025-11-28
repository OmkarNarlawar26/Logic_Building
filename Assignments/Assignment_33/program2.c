// Accept character from user and check whether it is capital or not.(A-Z)

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkCaptial
//  Description     :   Used to check given characeter is capital or not
//  Input           :   Integer
//  Output          :   boolean
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
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
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is captial character");
    }
    else
    {
        printf("It is not a capital character");
    }

    return 0;
}// End of Main
