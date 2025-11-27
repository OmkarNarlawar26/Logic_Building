////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountVowels
//  Description     :   Used to count number of occurance of d in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

// a,e,i,o,u

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str == ch)) 
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

    iRet = CountOccurance(Arr,'d');

    printf("Count of occurances are : %d\n",iRet);

    return 0;
}// End of Main
