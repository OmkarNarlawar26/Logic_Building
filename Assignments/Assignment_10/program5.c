// Write a program which accept area in square feet and convert it into sq.meter.(1 square feet = 0.0929 square meter)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description :   It is used to display area into sq.meter
//  Input :         Integer
//  Output :        Double
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    float fSqM = 1;
    fSqM = iNo * 0.0929;

    return fSqM;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter %lf",dRet);

    return 0;
}
