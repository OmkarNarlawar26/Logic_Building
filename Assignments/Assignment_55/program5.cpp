// Write generic program to find maximum of four values.

#include<iostream>
using namespace std;

template<class T>

T Max(T a, T b, T c, T d)
{
    if(a > b && a > c && a > d)
    {
        printf("a is largest\n");
    }
    else if(b > a && b > c && b > d)
    {
        printf("b is largest\n");
    }
    else if(c > a && c > b && c > d)
    {
        printf("c is largest\n");
    }
    else
    {
        printf("d is largest\n");
    }
}

int main()
{
    Max(45,56,33,14);

    return 0;
}
