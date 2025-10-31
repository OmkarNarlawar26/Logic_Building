// Check Leap Year

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   check leap year
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void CheckLeapYear(int Year)
{
    if(Year % 400 == 0)
    {
        ("%d is Leap Year",Year);
    }
    else if(Year % 100 == 0)
    {
        printf("%d is not Leap Year",Year);
    }
    else if(Year % 4 == 0)
    {
        printf("%d is Leap Year",Year);
    }
    else
    {
        printf("%d is not Leap Year",Year);
    }
}

int main()
{
    int yr = 0;

    printf("Enter Year\n");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}
