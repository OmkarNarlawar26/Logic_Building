// Write generic program to accept N values and reverse the contents.

#include<iostream>
using namespace std;

template<class T>

void Reverse(T*arr, int iSize)
{
    int Start = 0;
    int End = iSize - 1;
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
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";   //  10 20 30 10 30 40 10 40 10
    }
    cout<<"\n";
    
    Reverse(arr,9);
    
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";           // Reversed array
    }
    cout<<"\n";
}
