// Write a recursive program which Accept String from user and count white spaces.
// Input  : HE llo WOr ID
// Output : 3

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str == '\0')
    {
        return iCount;
    }

    if(*str == ' ')
    {
        iCount++;
    }

    str++;
        
    WhiteSpace(str);

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]",arr);

    iRet = WhiteSpace(arr);

    printf("%d\n",iRet);

    return 0;
}
