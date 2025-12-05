// Write a program which accept string from user and copy that characters of tat string into another string by converting all capital characters into small case.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrCpySmall
//  Description     :   used to copy the same string by converting capital to small characters
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
     while(*src != '\0')
    {   
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;      // Convert to small
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
    char Arr[30] = "MARVELLOUS PYTHON 2";
    char Brr[30];                    // Empty string

    StrCpySmall(Arr,Brr);

    printf("%s",Brr);               // marvellous Python 2 

    return 0;
}// End of Main
