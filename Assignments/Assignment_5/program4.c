// Check positive, negative or zero

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckNumberType
//  Description :   Check positive, Negative, or zero
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if(num < 0)
    {
        printf("Number is Negative");
    }
    else if(num > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Zero");
    }
}

int main()
{
    int Number = 0;

    printf("Enter number\n");
    scanf("%d",&Number);

    CheckNumberType(Number);

    return 0;
}
