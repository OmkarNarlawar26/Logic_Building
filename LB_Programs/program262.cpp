#include<iostream>
using namespace std;

template<class T>

T Add(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}
int main()
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;

    iRet = Add(iValue1,iValue2);

    cout<<iRet;

    return 0;
}
