// Write a program which accept number number from user and display its digits in reverse order.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   It is used to display digits in reverse order
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

// Time Complexity : O(N)