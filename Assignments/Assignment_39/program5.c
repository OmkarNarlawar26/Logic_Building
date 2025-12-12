// Write a recursive program which display below pattern
// a    b   c   d   e   f

#include<stdio.h>

void Display()
{
    static char cCount = 'a';

    if(cCount <= 'f')
    {
        printf("%c\t",cCount);
        cCount++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
