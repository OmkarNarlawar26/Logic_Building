// Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14.(Area = PI * Radius * Radius)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description :   It is used to display area of circle
//  Input :         float
//  Output :        float
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float PI = 3.14;

    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is %f",dRet);

    return 0;
}
