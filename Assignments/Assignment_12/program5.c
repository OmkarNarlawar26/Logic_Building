// Check if number is divisible by 5

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : is_dicisible_by_five
//  Description :   It is used to check number is divisible by 5
//  Input :         Integer
//  Output :        Boolean
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

bool is_divisibe_by_five(int number)
{
    if((number % 5) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int number = 0;

    printf("Enter number : ");

    scanf("%d", &number);

    printf("%s\n", is_divisibe_by_five(number) ? "Yes" : "No");

    return 0;
}

// Time Complexity : O(1)