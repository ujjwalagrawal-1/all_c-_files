#include<iostream>
#include<math.h>
using namespace std;

int main(){
    /*
    int a,b,c;
    cin>>b;
    a = 0 ;
    c = 0;
    int digi;
    int num = 0;
    while(b !=0){
        digi  = b%2;
        b = b/2;
        num = (digi * pow(10,c) + num);
        c++;
    }
    cout<<num<<endl;
    */
   //plandrom of the number ;
   int a,b,c,i;
   cin>>a; 
   b= 0 ;
   while(a!=0){
    c = a%10;
    cout<<c<<endl;
    b = (b*10 + c);
    cout<<b<<endl;
    a = a/10;
    cout<<a<<endl;
   }
}
       