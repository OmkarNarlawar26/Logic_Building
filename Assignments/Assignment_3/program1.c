//  Write a program which accept one number from user and print that number of even numbers on screen.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to display even numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo*2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter number :\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
