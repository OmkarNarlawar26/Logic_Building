////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountVowels
//  Description     :   Used to count of Vowels in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

// a,e,i,o,u

int CountVowels(char str[])
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U')) 
        {
            iCount++;
        }
        str++;
    }

    return iCount;

}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Count of Vowels are : %d\n",iRet);

    return 0;
}// End of Main
