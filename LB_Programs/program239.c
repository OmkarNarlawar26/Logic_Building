////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strtoggleX
//  Description     :   Used to change the character small to capital and capital to small in given string
//  Input           :   String
//  Output          :   string
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

void strtoggleX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z')) 
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}// End of Main
