// Accept one number from user and print that number of * on Screen.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display *
//  Input :         Integer
//  Output :        Symbol
//  Author :        Omkar Sachin Narlawar
//  Date :          19/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
