// Write a program which accept string from user and convert it into capital case.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   struprX
//  Description     :   Used to convert string into capital case
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   30/11/2025
//
////////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    struprX(Arr);

    printf("Modified string is : %s",Arr);

    return 0;
}