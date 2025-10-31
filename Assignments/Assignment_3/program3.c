// Write a program which accept number from the user and print even factors of that number.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayEvenFactor
//  Description :   It is used to display even factors
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo/2; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
