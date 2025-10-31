// Count total factors of a number

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : count_factors
//  Description :   It is used to display total factors of a number
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int count_Factors(int Number)
{
    
    // TODO : return the total number of positive factors of 'number'

    // Updator
    if(Number < 0)
    {
        Number = -Number;
    }

    int iCnt = 0;
    int count = 0;

    for(iCnt = 1; iCnt <= Number/2; iCnt++)
    {
        if((Number % iCnt) == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int Number = 0;

    printf("Enter number : ");
    scanf("%d", &Number);

    printf("%d\n", count_Factors(Number));

    return 0;
}

// Time Complexity : O(N/2)