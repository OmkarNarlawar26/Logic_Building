// print all odd numbers up to N

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : print_odd_numbers
//  Description :   print all odd number from 1 to N
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int iCnt = 0;

    //Updator
    if(limit < 0)
    {
        limit = -limit;
    }

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}

// Time Complexity : O(N)