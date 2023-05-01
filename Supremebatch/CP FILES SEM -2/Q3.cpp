// WAP to check entered year is leap year or not.
#include<iostream>
using namespace std;
int main()
{
    cout<<"NAME --> UJJWAL AGRAWAL  ROLL NO --> 22118107"<<endl;
    int year;
    cout<<"Enter your year";
    cin>>year;
    if(year%4 == 0)
    {
        if(year%100 ==0)
        {
            if(year %400 ==0)
            {
                cout<<"Leap year";
            }
            else
            {
                cout<<"Not Leap year";
            }
        }
        else
        {
            cout<<"Leap year";
        }
    }
    else
    {
        cout<<"Not a Leap year";
    }
    return 0;
}
