// Accept number from user and check whether number is even or odd.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEven
//  Description :   It is used to Check Even or Odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Omkar Sachin Narlawar
//  Date :          19/10/2025
//
////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
