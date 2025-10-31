// Write a program which accept distance in kilometer and convert it into meter.(1 Kilometer = 1000 Meter)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : KMToMeter
//  Description :   It is used to display distance in meter
//  Input :         Integer
//  Output :        Integer
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is %d",iRet);

    return 0;
}
