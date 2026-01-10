// Write generic program to perform division of two numbers.

#include<iostream>
using namespace std;

template<class T>

T Div(T no1, T no2)
{
    if(no2 == 0 && no2 > no1)
    {
        return -1;
    }

    T ans;
    ans = no1 / no2;
    return ans;
}

int main()
{
    int iRet = Div(20,10);
    cout<<iRet<<"\n";

    float fRet = Div(20.3f,10.5f);
    cout<<fRet<<"\n";

    return 0;
}
