// Accept two numbers from user and display first number in second number of times.

/*
Input   :   12  5
Output  :   12  12  12  12  12

Input   :   -2  3  
Output  :   -2  -2  -2

Input   :   21  -3 
Output  :   21  21  21

Input   :   -2  0
Output  : 

*/

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display how many times the number is printed
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          19/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    // Updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}
