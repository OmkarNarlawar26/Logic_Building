// Find sum of first N even numbers

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_even_numbers
//  Description :   Find sum of first N even numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          27/10/2025
//
////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int sum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            sum = sum + iCnt;
        }
    }
    return sum;
}

int main()
{
    int limit;

    printf("Enter number : ");
    scanf("%d", &limit);

    printf("%d\n",sum_even_numbers(limit));

    return 0;
}

// Time Complexity : O(N)