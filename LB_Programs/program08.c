/*
    Step 1 : understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

/*
    Algorithm

    START
        Accept First number as No1
        Accept Second number as No2
        Perform addition of No1 and No2
        Display the addition on Screen
    STOP
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;
    fSum = fNo1 + fNo2;            // Business Logic
    return fSum;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter First number : \n");
    scanf("%f", &fValue1);

    printf("Enter Second number : \n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);
    
    printf("Addition is : %f\n",fRet);

    return 0;
}
