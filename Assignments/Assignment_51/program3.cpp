// Write generic program to accept N values and  search first occurance of any specific value.

#include<iostream>
using namespace std;

template<class T>

int SearchFirst(T*arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iSize; iCnt++)
    {
        if(arr[iCnt] == iNo)
        {
            return (iCnt+1);
            break;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchFirst(arr,9,40);

    printf("%d",iRet);      // 6
    return 0;
}
