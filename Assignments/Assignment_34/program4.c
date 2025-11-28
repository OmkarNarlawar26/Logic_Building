// Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*)

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
//  Function Name   :   ChkAlpha
//  Description     :   Used to check given characeter is alphabet or not
//  Input           :   Symbol
//  Output          :   boolean
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


BOOL ChkAlpha(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||(ch == '^') || (ch == '&') || (ch == '*') || (ch == '%'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not a special character");
    }

    return 0;
}// End of Main
