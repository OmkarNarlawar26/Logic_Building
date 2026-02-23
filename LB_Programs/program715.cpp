#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;

        CheckPerfect(iNo);
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number : \n";
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        cout<<"It is a Perfect Number \n";
    }
    else
    {
        cout<<"It is not a Perfect Number \n";
    }

    return 0;
}