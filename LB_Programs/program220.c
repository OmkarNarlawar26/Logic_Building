////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Count
//  Description     :   Used to count of a,A in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Omkar Sachin Narlawar
//  Date            :   27/11/2025
//
////////////////////////////////////////////////////////////////////////

int Count(char str[])
{
    int iCount = 0;

    while(*str != 0)
    {
        if((*str == 'A') || (*str == 'a')) 
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

    iRet = Count(Arr);

    printf("Count of A/a is : %d\n",iRet);

    return 0;
}// End of Main
