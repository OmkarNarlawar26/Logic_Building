// Accept ont number and check whether it is dividible by 5 or not.


////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>                               // For Input Output
#include<stdbool.h>                             // For bool Datatype

////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   checking divisiability of 5
//  Input :         Integer
//  Output :        Boolean
//  Author :        Omkar Sachin Narlawar
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }

    return 0;
}

////////////////////////////////////////////////////////////////////
//
//  Input : 10              Output : Divisible by 5
//  Input : 12              Output : Not Divisible by 5
//  Input : -20             Output : Divisible by 5
//  Input : -11             Output : Not Divisible by 5
//
////////////////////////////////////////////////////////////////////
