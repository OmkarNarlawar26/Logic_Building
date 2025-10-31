// Accept single digit number from user and print it into word.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   It is used to display number into word
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 1 :
            printf("One");
            break;

        case 2 :
            printf("Two");
            break;

        case 3 :
            printf("Three");
            break;

        case 4 :
            printf("Four");
            break;

        case 5 :
            printf("Five");
            break;

        case 6 :
            printf("Six");
            break;

        case 7 :
            printf("Seven");
            break;

        case 8 :
            printf("Eight");
            break;

        case 9 :
            printf("Nine");
            break;

        default :
            printf("Invalid Input");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
