// Write a program which accept number from the user and print factors of that number.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor
//  Description :   It is used to display factor numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <= iNo/2; i++)
    {
        if((iNo % i) == 0)
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

    DisplayFactor(iValue);

    return 0;
}
