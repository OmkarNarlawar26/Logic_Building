////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ReverseDisplay
//  Description     :   used to display reverse of the string
//  Input           :   character
//  Output          :   character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

void ReverseDisplay(char *str)
{
    char *temp = str;
    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }
    
    printf("\n");

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

    ReverseDisplay(Arr);

    return 0;
}// End of Main

