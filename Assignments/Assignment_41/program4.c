// Write a recursive program which accept number from user and return itss Factorial.
// 5 -> 120

#include<stdio.h>

int Fact(int iNo)
{
    static int iCnt = 1;
    static int Factorial = 1;

    if(iNo == 0)
    {
        return 1;
    }
    else
    {
        if(iNo >= iCnt)
        {
            Factorial = Factorial * iNo;
            iNo--;
            Fact(iNo);
        }
    
        return Factorial;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}
