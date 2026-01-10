// Write generic program to replace all occurances of a value.

#include<iostream>
using namespace std;

template<class T>

void Replace(T *arr, int iSize, T oldValue, T newValue)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == oldValue)
        {
            arr[iCnt] = newValue;
        }
    }
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int iCnt = 0;

    Replace(arr,5,30,100);

    cout<<"Array after replacement : ";

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr[iCnt]<<" ";
    }

    return 0;
}
