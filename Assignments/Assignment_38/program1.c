// Write a program which accept string from user and copy that characters  of that string into another string in reverse order.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrCpyRev
//  Description     :   used to reverse the given string and copy characters into another string
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrCpyRev(char *src, char *dest)
{
    char *Start = src;
    char *End = src;

    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }

    End--;       // To avoid \0

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }

    while(*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
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
    char Arr[30] = "Marvellous Python";
    char Brr[30];                    // Empty string

    StrCpyRev(Arr,Brr);

    printf("%s",Brr);               // nohtyP suollevraM

    return 0;
}// End of Main
