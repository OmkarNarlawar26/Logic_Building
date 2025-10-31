// Write a program which accept width and height of rectangle from user and calculate its area.(Area = Width * height)

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description :   It is used to display area of rectangle
//  Input :         float
//  Output :        float
//  Author :        Omkar Sachin Narlawar
//  Date :          26/10/2025
////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is %f",dRet);


    return 0;
}
