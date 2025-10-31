// write a program which accept number from user and if number is less than 50 then print small, if it is greater than 50 and less than 100 then print medium, it is greater than 100 then print larger.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description :   It is used to display small, medium, and larger number 
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo >50) && (iNo <100))
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);


    return 0;
}
