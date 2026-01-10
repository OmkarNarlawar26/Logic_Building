// Write generic program to find smallest element from the array.

#include<iostream>
using namespace std;

template<class T>

T Min(T *arr, int iSize)
{
    int iCnt = 0;
    T Min = arr[0];

    for(iCnt = 1; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] < Min)
        {
            Min = arr[iCnt];
        }
    }
    return Min;
}

int main()
{
    int arr[5] = {10,15,20,35,30};
    int iRet = 0;

    iRet = Min(arr,5);

    cout<<"Smallest Element is : "<<iRet<<"\n";

    return 0;
}
