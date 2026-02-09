// Write a recursive program which Accept Number from user and return its product of digits.
// Input  : 523
// Output : 30

#include<stdio.h>

int Mult(int iNo)
{
    static int iProd = 1;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;

        Mult(iNo);
    }

    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d",iRet);

    return 0;
}
