// Write generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template<class T>

T Max(T no1, T no2, T no3)
{
    if(no1 > no2 && no1 > no3)
    {
        printf("no1 is largest\n");
    }
    else if(no2 > no1 && no2 > no3)
    {
        printf("no2 is largest\n");
    }
    else
    {
        printf("no3 is largest\n");
    }
}

int main()
{
    Max(3.4,5.6,44.44);

    return 0;
}
