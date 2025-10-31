// Write a program which accept N and print first 5 multiple of N.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   It is used to display multiple of 5
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {

        printf("%d\t",iNo * iCnt);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
