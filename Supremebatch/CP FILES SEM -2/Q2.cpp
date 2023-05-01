// WAP to check input numer is magical or not if it is divisible by 3 and 5 but not by 10.
#include<iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    int n;
    cout <<"Enter the number :";
    cin>>n;
    if((n%3==0)&&(n%5==0)&&(n%10!=0))
    {
        cout<<"Input number is magical";
    }
    else
    {
        cout<<"Input number is not magical";
    }
    return 0;
}