// WAP in C++ to check entered number is prime number on not . (loop program)
#include <iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    int n,t=0;
    cout<<"Enter your number :";
    cin>>n;
    for(int i=2; i<n ; i++)
    {
        if(n%i==0)
        {
            t++;
        }
    }
    if(t==0)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
}