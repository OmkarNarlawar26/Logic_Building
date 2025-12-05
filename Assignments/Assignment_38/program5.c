// Write a program which accept string from user and copy that characters of tat string into another string by toggling the case.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrCpySmall
//  Description     :   used to copy the same string by toggling the characters
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
     while(*src != '\0')
    {   
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;      // Convert to small
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;      // Convert to capital
        }
        else
        {
            *dest = *src;           // Copy as it is
        }

        dest++;
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
    char Arr[30] = "Marvellous Python 2";
    char Brr[30];                    // Empty string

    StrCpyToggle(Arr,Brr);

    printf("%s",Brr);               // mARVELLOUS pYTHON 2

    return 0;
}// End of Main
