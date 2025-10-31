// Find Laggest among three numbers

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   It is used to find largest amont three numbers
//  Input :         Integer,Integer,Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
//
////////////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iNum1 = 0, iNum2 = 0, iNum3 = 0;
    int Result = 0;

    printf("Enter two Numbers :\n");
    scanf("%d %d %d",&iNum1, &iNum2, &iNum3);

    Result = FindLargest(iNum1,iNum2,iNum3);

    printf("largest Number is : %d\n",Result);


    return 0;
}
