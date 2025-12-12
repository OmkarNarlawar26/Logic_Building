// Write a recursive program which display below pattern
// A    B   C   D   E   F

#include<stdio.h>

void Display()
{
    static char cCount = 'A';

    if(cCount <= 'F')
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
