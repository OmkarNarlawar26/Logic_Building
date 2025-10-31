// Sum of even factors(excluding th number itself)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_even_factors
//  Description :   It is used to display sum of even factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int Number)
{
    
    // TODO : return sum of all positive even factors excluding 'number'

    int iCnt = 0;
    int count = 0;

    // Updator
    if(Number < 0)
    {
        Number = -Number;
    }

    for(iCnt = 1; iCnt <= Number/2; iCnt++)
    {
        if((Number % iCnt) == 0 && (iCnt % 2) == 0)
        {
            count = iCnt + count;
        }
    }
    return count;
}

int main()
{
    int Number = 0;

    printf("Enter number : ");
    scanf("%d", &Number);

    printf("%d\n", sum_of_even_factors(Number));

    return 0;
}

// Time Complexity : O(N/2)