//WAP to check input number is EVEN or ODD
#include <iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    if((n%2)==0)
    {
        cout<<"Your number is EVEN";
    }else
    {
        cout<<"Your number is ODD";
    }
    return 0;
}