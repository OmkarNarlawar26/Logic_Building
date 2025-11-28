// Accept character from user and check whether it is small case or not.(a-z)

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
//  Function Name   :   ChkSmall
//  Description     :   Used to check given characeter is small case or not
//  Input           :   Integer
//  Output          :   boolean
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


BOOL ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}// End of Main
