// Input  : 4
// Output : 4*3*2*1 = 24

#include<iostream>
using namespace std;

int iFact = 1;

void Factorial(int iNo)
{
    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        Factorial(--iNo);       // pre decrement
    }
}

int main()
{
    Factorial(4);

    cout<<iFact<<"\n";

    return 0;
}