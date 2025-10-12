/*
    Algorithm

    START
        Accept First number as No1
        Accept Second number as No2
        If the input is negative then convert it into positive
        Perform addition of No1 and No2
        Display the addition on Screen
    STOP
*/

//////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform Addition
//  Input :         Float,Float
//  Output :        Float
//  Author :        Omkar Sachin Narlawar
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(
                            float fNo1,                 // First Input
                            float fNo2                  // Second Input
                        )
{
    float fSum = 0.0f;                                  // To store the Result

    if(fNo1 < 0.0f)                                     // Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                     // Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                                 // Business Logic

    return fSum;
}   // End of AdditionTwoNumbers

//////////////////////////////////////////////////////////////////////
//
//  Entry point function or the application
//
//////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;               // To accept user input
    float fRet = 0.0f;                                  // To store the result

    printf("Enter First number : \n");
    scanf("%f", &fValue1);

    printf("Enter Second number : \n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);         // Method/API/Function call
    
    printf("Addition is : %f\n",fRet);

    return 0;
}   // End of main

//////////////////////////////////////////////////////////////////////
//
//  Testcases Successfully handled by the application
//
//  Input1 : 10.5        Input2 : 3.2       Output : 13.7  
//  Input1 : -10.5       Input2 : 3.2       Output : 13.7  
//  Input1 : 10.5        Input2 : -3.2      Output : 13.7  
//  Input1 : -10.5       Input2 : -3.2      Output : 13.7  
//  Input1 : 10.5        Input2 : 0         Output : 10.5  
//
//////////////////////////////////////////////////////////////////////
