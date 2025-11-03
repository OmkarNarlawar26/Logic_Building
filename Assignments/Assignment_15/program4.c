// Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : MultiDigit
//  Description :   It is used to count numbers of odd digits present in it
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          3/11/2025
//
////////////////////////////////////////////////////////////////////

int MultiDigit(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMulti = iMulti * iDigit;
    }  
    return iMulti;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = MultiDigit(iValue);

    printf("%d",iRet);

    return 0;
}

// Time Complexity : O(N)