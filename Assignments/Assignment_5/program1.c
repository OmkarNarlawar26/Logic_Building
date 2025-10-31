// Check Even or Odd

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to display even or odd
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNum)
{
    if((iNum % 2) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    int Number = 0;

    printf("Enter Number :\n");
    scanf("%d",&Number);

    CheckEvenOdd(Number);

    return 0;
}
