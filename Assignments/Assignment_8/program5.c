// Write a program which accept number from user and display its table in reverse.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : TableRev
//  Description :   It is used to display the table in reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
