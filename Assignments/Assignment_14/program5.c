// Write a program which accept number from user and count frequency of such a digit which are less than 6.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description :   It is used to count frequency of such a digit
//                  which are less than 6
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < 6)
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
    
    iRet = Count(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)