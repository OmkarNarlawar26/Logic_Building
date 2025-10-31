// Write a program which accept name from user and print that name.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : -
//  Description :   It is used to display full name
//  Input :         character
//  Output :        characters
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int main()
{
    char Name[30];

    printf("Please enter full name\n");
    scanf("%s",Name);

    printf("Your name is %s", Name);

    return 0;
}

// TIme Complexity : O(1)