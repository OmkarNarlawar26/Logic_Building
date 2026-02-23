// Hello
// olleH

#include<iostream>
#include<stdio.h>

using namespace std;

void strDisplay(char *str)
{
    if(*str != '\0')
    {
        str++;
        strDisplay(str);
        cout<<*str<<"\n";
    }

}

int main()
{
    char Arr[50] = {'\0'};

    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']", Arr);

    strDisplay(Arr);
    
    return 0;
}