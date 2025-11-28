// Accept the character from user. It it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   used to display capital till Z or small till a(reverse order) and for other case return directly
//  Input           :   Character
//  Output          :   Character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


void Dislpay(char ch)
{
    char cCount = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCount = ch; cCount <= 'Z';cCount++)
        {
            printf("%c\t",cCount);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCount = ch; cCount >= 'a';cCount--)
        {
            printf("%c\t",cCount);
        }
    }

}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Dislpay(cValue);

    return 0;
}// End of Main
