// Write generic program to find second largest element.

#include<iostream>
using namespace std;

template<class T>

T SecondMax(T *arr, int iSize)
{
    int iCnt = 0;
    T Max = arr[0], SecondMax = arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] > Max)
        {
            SecondMax = Max;
            Max = arr[iCnt];
        }
        else if(arr[iCnt] > SecondMax && arr[iCnt] != Max)
        {
            SecondMax = arr[iCnt];
        }
    }
    return SecondMax;
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    cout<<"Second largest element : "<<SecondMax(arr,5)<<"\n";

    return 0;
}
