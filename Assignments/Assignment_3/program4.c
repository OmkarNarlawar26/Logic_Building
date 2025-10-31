// Accept one character from user and convert case ot that character.

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   It is used to ASCII value of character.
//  Input :         char
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c",CValue - 32);                   // Here 32 is used because the difference between lowercase and uppercase letter is 32 in ASCII.
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c",CValue + 32);                  // Here 32 is used because the difference between lowercase and uppercase letter is 32 in ASCII.
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
