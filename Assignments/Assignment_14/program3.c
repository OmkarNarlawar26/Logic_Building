// Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description :   It is used to count numbers of 2 present in given number
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
        if(iDigit == 2)
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
    
    iRet = CountTwo(iValue);

    printf("Number of Digits are : %d",iRet);

    return 0;
}

// Time Complexity : O(N)