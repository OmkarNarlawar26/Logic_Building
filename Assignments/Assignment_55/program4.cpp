// Write generic program to swap two value.

#include<iostream>
using namespace std;

template<class T>

void Swap(T &no1, T &no2)
{
    T temp;
    
    temp = no1;
    no1 = no2;
    no2 = temp;

    cout<<no1<<"\t"<<no2<<"\n";
}

int main()
{
    int a = 10, b =20;
    Swap(a,b);

    float x = 3.5f, y = 7.8f;
    Swap(x,y);
    return 0;
}
