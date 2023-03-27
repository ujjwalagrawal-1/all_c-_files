#include<iostream>
using namespace std;
/*
int power(int a ,int b) { 
    // power of number 
    int ans = 1 ;
    for(int i =1 ;i<=b;i++)
    {
        ans  = ans * a ;
     }
     return ans;
}
int main() {
    int a,b;
    cout<< "Please enter the number u want to get square"<<endl;
    cin>>a;
    cout<< "Please enter which Square u want "<<endl;
    cin>>b; 
    int num3 = power(a,b);
    cout<<"square of the number is "<<"\n"<<num3<<endl;
}
*/
int evenodd(int a){
    /*
    if(a%2 == 0){
        cout<<"Is even Number"<<endl;
    }
    else if(a%2 == 1){
        cout<<"Is odd Number"<<endl;
    }
}
int main() 
{
int b;
cin>>b;
int x = evenodd(b);
cout<<x<<endl;
}