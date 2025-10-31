// Accept the character from user and check whether that character is vowel (a,e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkVowel
//  Description :   It is used to display alphabet is vowel or not.
//  Input :         Character
//  Output :        boolean
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U'|| cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is no Vowel");
    }

    return 0;
}