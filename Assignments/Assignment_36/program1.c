// Write a program which accept string from user and convert it into lower case.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strlwrX
//  Description     :   Used to convert string into lower case
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   30/11/2025
//
////////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
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

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}