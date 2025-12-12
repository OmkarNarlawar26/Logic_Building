// Write a recursive program which accept String from user and count number of characters.
// Hello = 5

#include<stdio.h>

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str == '\0')
    {
        return 0;
    }
    else
    {
        iCnt++;

        Strlen(str + 1);
    }

    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : ");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d",iRet);

    return 0;
}
