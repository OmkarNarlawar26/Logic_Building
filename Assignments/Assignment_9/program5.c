// write a program which returns differenc between Even factorial and Odd factorial of given number.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description :   It is used to display difference between rven and odd factorial.
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEFact = 1;
    int iOFact = 1;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEFact = iEFact * iCnt;
        }
        else
        {
            iOFact = iOFact * iCnt;
        }
    }
    return iEFact - iOFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Factorial difference is %d",iRet);


    return 0;
}
