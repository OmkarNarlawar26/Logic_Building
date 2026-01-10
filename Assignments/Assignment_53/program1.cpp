// Write generic program to copy one array into another.

#include<iostream>
using namespace std;

template<class T>

void CopyArray(T *src, T *dest, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        dest[iCnt] = src[iCnt];
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    int CopyArr[5];
    int iCnt = 0;

    CopyArray(arr,CopyArr,5);
    
    cout<<"Copied Array is : ";
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<CopyArr[iCnt]<<" ";
    }
    cout<<"\n";

    return 0;
}
