#include<iostream>
using namespace std;

int Add(int iNo1, int iNo2)
{
    int Ans;
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
