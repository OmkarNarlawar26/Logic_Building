// Write generic program to check whether array is sorted.

#include<iostream>
using namespace std;

template<class T>

bool CheckSorted(T *arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize-1; iCnt++)
    {
        if(arr[iCnt] > arr[iCnt+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    bool bRet = false;

    bRet = CheckSorted(arr,5);

    if(bRet == true)
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }

    return 0;
}
