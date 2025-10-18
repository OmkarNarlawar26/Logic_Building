// Accept one number from the user if number is less than 10 then print "Hello" otherwise print "Demo".

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display Hello or Demo
//  Input :         Integer
//  Output :        String
//  Author :        Omkar Sachin Narlawar
//  Date :          19/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo <= 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
