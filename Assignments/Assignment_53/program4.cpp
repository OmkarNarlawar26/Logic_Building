// Write generic program to find second smallest element.

#include<iostream>
using namespace std;

template<class T>

T SecondMin(T *arr, int iSize)
{
    int i = 0;
    T Min = arr[0];
    T SMin;
    
    for(i = 1; i < iSize; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }

    int i = 0;
    SMin = arr[0];
    
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] != Min)
        {
            SMin = arr[i];
            break;
        }
    }

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] < SMin && arr[i] != Min)
        {
            SMin = arr[i];
        }
    }

    return SMin;
}

int main()
{
    int arr[5] = {10,20,30,40,50};

    cout<<"Second smallest element : "<<SecondMin(arr,5)<<"\n";

    return 0;
}
