// Write a recursive program which display below pattern.
// Output : a   b   c   d   e   f

#include<stdio.h>

void Display(char ch)
{
    static char cCnt = 'a';

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
