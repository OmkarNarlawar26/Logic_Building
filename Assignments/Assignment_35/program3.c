// Write a program which accept string from user and return difference between frequency of small and capital characters.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Used to return difference between small and capital characters.
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


int Difference(char *str)
{
    int iCCnt = 0;
    int iSCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSCnt++;
        }

        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCCnt++;
        }
        str++;
    }
    return (iSCnt - iCCnt);
   
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

    iRet = Difference(Arr);

    printf("%d",iRet);

    return 0;
}// End of Main
