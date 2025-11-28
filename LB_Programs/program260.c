////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strrevX
//  Description     :   used to reverse the string
//  Input           :   character
//  Output          :   character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

void strrevX(char *str)
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
    
}// End of function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);

    printf("updated string is : %s\n",Arr);

    return 0;
}// End of Main

