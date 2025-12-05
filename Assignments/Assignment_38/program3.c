// Write a program which accept string from user and copy that characters of tat string into another string by converting all small characters into capital case.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrCpyCap
//  Description     :   used to copy the same string by converting small to capital characters
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src, char *dest)
{
     while(*src != '\0')
    {   
        if((*src >= 'a') && (*src <= 'z'))
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
    char Arr[30] = "marvellous Python 2";
    char Brr[30];                    // Empty string

    StrCpyCap(Arr,Brr);

    printf("%s",Brr);               // MARVELLOUS PYTHON 2

    return 0;
}// End of Main
