// Write a program which accept number from user and display its table.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description :   It is used to display table of number
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
