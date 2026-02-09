// Write a recursive program which display below pattern.
// Output : A   B   C   D   E   F

#include<stdio.h>

void Display(char ch)
{
    static char cCnt = 'A';

    if(cCnt <= ch)
    {
        printf("%c\t",cCnt);
        cCnt++;

        Display(ch);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter Character : \n");
    scanf("%c",&CValue);

    Display(CValue);

    return 0;
}
