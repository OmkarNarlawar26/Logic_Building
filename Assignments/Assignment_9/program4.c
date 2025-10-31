// write a program to find Odd factorial of given number.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description :   It is used to display odd factorial
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);


    return 0;
}
