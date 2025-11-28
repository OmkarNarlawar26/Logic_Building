////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strcatX
//  Description     :   used to concatinate one string in another string
//  Input           :   character
//  Output          :   character
//  Author          :   Omkar Sachin Narlawar
//  Date            :   28/11/2025
//
////////////////////////////////////////////////////////////////////////

void strcatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = *src;

}// End of function

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string :\n");
    scanf("%[^'\n']s",Brr);

    printf("Enter destination string :\n");
    scanf(" %[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("updated string is : %s\n",Brr);


    return 0;
}// End of Main

