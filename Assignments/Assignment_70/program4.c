// Write a recursive program which Accept number from user and return its factorial.
// Input  : 5
// Output : 120

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        iNo--;

        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}
