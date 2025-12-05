// Write a program which accept string from user and copy that characters of that string into another string into another string by removing all white spaces

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrCpyX
//  Description     :   used to copy the same string by removing white space only
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')         // Skip spaces
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30] = "Marvel  lous Pyth  on";
    char Brr[30];                    // Empty string

    StrCpyX(Arr,Brr);

    printf("%s",Brr);               // MarvellousPython

    return 0;
}// End of Main
