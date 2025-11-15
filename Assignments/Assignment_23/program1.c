// Accept N number from user and and accept one another number as No, check whether No is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet = false;
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

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}
