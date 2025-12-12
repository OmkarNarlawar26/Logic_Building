// Write a recursive program which display below pattern
// A    B   C   D   E   F

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt= 1;
    static char cCnt = 'a';
    

    if(iCnt <= iNo)
    {
        printf("%c\t",cCnt);
        iCnt++;
        cCnt++;
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
