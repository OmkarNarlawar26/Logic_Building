////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountDigit
//  Description     :   Used to count number of digits in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

void CountDigits(char str[])
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str >= '0') && (*str <= '9')) 
        {
            iCount++;
        }
        str++;
    }
    
    printf("Number of Small characters are : %d\n",iCount);

}// End of Function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    CountDigits(Arr);

    return 0;
}// End of Main
