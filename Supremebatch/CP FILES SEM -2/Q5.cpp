// WAP in C++ to print all number on screen which are divisible by 3, 5 & 7 from 1 to 500.
#include <iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    for(int i=1; i<=500; i++)
    {
        if ((i%3==0)&&(i%5==0)&&(i%7==0))
        {
            cout<<i<<"\t";
        }
    }
    return 0;
}