////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Description     :   Used to count number of small characters in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z')) 
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

    iRet = CountSmall(Arr);

    printf("Count of small characters are : %d\n",iRet);

    return 0;
}// End of Main
