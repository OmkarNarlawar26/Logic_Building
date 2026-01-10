// Write generic program to accept N values and  search last occurance of any specific value.

#include<iostream>
using namespace std;

template<class T>

int SearchLast(T*arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt = iSize; iCnt >= 0; iCnt--)
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

    int iRet = SearchLast(arr,9,40);

    printf("%d",iRet);      // 6
    return 0;
}
