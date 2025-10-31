// Write a program whivh accept number from user and check whether it contains 0 or in it or not.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkZero
//  Description :   It is used to check whether it contains 0 in it or not
//  Input :         Integer
//  Output :        boolean
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo == 0)
    {
        return TRUE;
    }

    //Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }
        
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}

// Time Complexity : O(N)