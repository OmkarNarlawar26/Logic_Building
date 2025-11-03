// Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountOdd
//  Description :   It is used to count numbers of odd digits present in it
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          3/11/2025
//
////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if((iDigit % 2) != 0)
        {
            iCount++;
        }
        continue;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)