// Write a program which accept string from user and display it in reverse order.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Reverse
//  Description     :   used to display string in reverse order.
//  Input           :   String
//  Output          :   String
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


void Reverse(char *str)
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
   
}// End of Function

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

    Reverse(Arr);

    printf("%s",Arr);

    return 0;
}// End of Main
