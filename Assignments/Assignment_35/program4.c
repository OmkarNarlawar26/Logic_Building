// Write a program which accept string from user and check whether it contains vowel in it or not.

////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Description     :   Used to check whether vowel is present or not.
//  Input           :   String
//  Output          :   boolean
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////


BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        str++;        
    }
   
}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel");
    }
    else
    {
        printf("There is no vowel");
    }

    return 0;
}// End of Main
