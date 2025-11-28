// Write a program which accept string from user and count number of small charactes.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Description     :   Used to count the number of small characters in given string.
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
   
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Count of Small characters are : %d",iRet);

    return 0;
}// End of Main
