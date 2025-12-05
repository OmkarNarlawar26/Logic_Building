// Write a program which accept string from user and reverse that string in place.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strRevX
//  Description     :   Used to reverse the string
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   30/11/2025
//
////////////////////////////////////////////////////////////////////////

int strRevX(char *str)
{
    char *Start = str;
    char *End = str;

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
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    strRevX(Arr);

    printf("Modified string is %s",Arr);
    
    return 0;
}