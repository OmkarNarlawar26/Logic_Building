// Accept N number from user and and accept one another number as No, return index of last occurance ot that No.

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int LOcc = iLength;
    
    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return LOcc;
            break;
        }
        LOcc--;
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of element :\n");
    scanf("%d",&iSize);

    printf("Enter the number : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : ",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last Occurance of number is %d",iRet);
    }

    free(p);

    return 0;
}
