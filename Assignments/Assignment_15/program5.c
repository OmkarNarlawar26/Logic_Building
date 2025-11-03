// Write a program which accept number from user and return difference between summation of even digits and summation of odd digits

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CountDiff
//  Description :   It is used to return the difference between odd and even digits
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          3/11/2025
//
////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;


    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        
        if((iDigit % 2) == 0)
        {
            iEven = iEven + iDigit;
        }

        if((iDigit % 2) != 0)
        {
            iOdd = iOdd + iDigit;
        }
    }
    return iEven - iOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)