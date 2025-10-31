//  Write a program which accpets N from user and print all odd numbers up to N.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   It is used to display odd number up to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}
