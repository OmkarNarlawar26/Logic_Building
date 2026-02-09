// Write a recursive program which Accept String from user and count Number of small characters.
// Input  : HElloWOrLD
// Output : 5

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str == '\0')
    {
        return iCount;
    }

    if(*str >= 'a' && *str <= 'z')
    {
        iCount++;
    }

    str++;
        
    Small(str);

    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]",arr);

    iRet = Small(arr);

    printf("%d\n",iRet);

    return 0;
}
