// Write generic program to search a value in an array.

#include<iostream>
using namespace std;

template<class T>

bool Search(T *arr, int iSize, T Value)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(arr[iCnt] == Value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {10,20,30,40,50};
    int No = 30;
    bool bRet = false;

    bRet = Search(arr,5,No);

    if(bRet == true)
    {
        cout<<"Value found\n";
    }
    else
    {
        cout<<"Value not found\n";
    }


    return 0;
}
