////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountLarge
//  Description     :   Used to count number of large characters in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

int CountLarge(char str[])
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z')) 
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

    iRet = CountLarge(Arr);

    printf("Count of large characters are : %d\n",iRet);

    return 0;
}// End of Main
