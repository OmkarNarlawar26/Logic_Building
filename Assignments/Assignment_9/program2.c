//  Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70rupees.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description :   It is used to display Dollar into Indian currency
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}
