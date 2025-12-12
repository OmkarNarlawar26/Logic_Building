// Write a recursive program which accept number from user and display below pattern.
// 5    *   4   *   3   *   2   *   1   *

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;

    if(iNo >= iCnt)
    {
        printf("%d\t*\t",iNo);
        iNo--;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
