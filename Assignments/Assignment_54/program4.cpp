// Write generic program to reverse.

#include<iostream>
using namespace std;

template<class T>

void Reverse(T *arr, int iSize)
{
    int iCnt = 0;
    int Start = 0;
    int End = iSize-1;
    T temp;

    while(Start < End)
    {
        temp = arr[Start];
        arr[Start] = arr[End];
        arr[End] = temp;

        Start++;
        End--;
    }
}

int main()
{
    int arr[5] = {10,15,20,35,30};
    int iCnt = 0;

    Reverse(arr,5);

    cout<<"Reversed Array is: \n";
    
    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        cout<<arr[iCnt]<<"  ";
    }

    return 0;
}
