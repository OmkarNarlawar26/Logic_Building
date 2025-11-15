#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    for(iMax = Arr[0], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d", &iLength);

    // step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);   
    }

    // Step 2 : Use the memory
    iRet = Maximum(iPtr, iLength);
    printf("maximum number is : %d\n",iRet);

    // Step 3 : Free the memory
    free(iPtr);

    return 0;
}
