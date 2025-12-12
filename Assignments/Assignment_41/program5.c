// Write a recursive program which accept number from user and return its product of its digits.
// 523 -> 30

#include<stdio.h>

int Mult(int iNo)
{
    static int iMulti = 1;
    static int iDigit = 0;

    if(iNo == 0)
    {
        return 0;
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;

        iMulti = iMulti * iDigit;

        Mult(iNo);
    }

    return iMulti;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}
