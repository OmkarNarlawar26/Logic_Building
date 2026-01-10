// Write generic program to find the sum of all odd elemnts.

#include<iostream>
using namespace std;

template<class T>

T SumOdd(T *arr, int iSize)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] % 2 != 0)
        {
            Sum = Sum + arr[iCnt];
        }
    }
    return Sum;
}

int main()
{
    int arr[5] = {10,15,20,35,30};
    int iRet = 0;

    iRet = SumOdd(arr,5);

    cout<<"Sum of odd elements is : "<<iRet<<"\n";

    return 0;
}
