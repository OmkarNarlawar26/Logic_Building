////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountAll
//  Description     :   Used to count number of small as well as large characters in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z')) 
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        str++;
    }
    
    printf("Number of Small characters are : %d\n",iCountSmall);
    printf("number of Capital characters are  : %d\n",iCountCapital);

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

    CountAll(Arr);

    return 0;
}// End of Main
