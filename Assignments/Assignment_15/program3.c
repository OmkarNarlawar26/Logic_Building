// Write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountRange
//  Description :   It is used to count digits in between 3 and 7
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          3/11/2025
//
////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
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

        if((iDigit > 3) && (iDigit < 7))
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
    
    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)