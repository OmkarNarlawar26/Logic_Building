// Find sum of first N natural numbers

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_natural_numbers
//  Description :   sum of first N natural numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int sum = 0;

    if(limit < 0)
    {
        printf("Invalid Input");
    }

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        sum = sum + iCnt;
    }
    return sum;
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n", sum_natural_numbers(limit));

    return 0;
}

// Time Complexity : O(N)