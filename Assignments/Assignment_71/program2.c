// Write a recursive program which Accept Number from user and return largest digit.
// Input  : 87983
// Output : 9

#include<stdio.h>

int Max(int iNo)
{
    static int iMax = 0;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iMax < iDigit)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("%d",iRet);

    return 0;
}
