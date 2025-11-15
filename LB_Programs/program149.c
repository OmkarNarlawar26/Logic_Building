#include<stdio.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;

}

int main()
{
    int iValue1 = 11;
    int iValue2 = 21;

    printf("Before swap : %d %d \n",iValue1,iValue2);

    Swap(&iValue1, &iValue2);       // & is written because it is call by address

    printf("After swap : %d %d \n",iValue1,iValue2);

    return 0;
}
