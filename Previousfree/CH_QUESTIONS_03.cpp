#include<iostream>
using namespace std;
int main() {
/* 
cout<< "yes programm is running please wait"<< endl;
int a,b;
a = 2;
b= a +1 ;
if((a=3)==3){
    cout<< a << "No" ;
}
else{
    cout<< a + 1 <<"yes" ;
}
*/
cout<<"2nd Question"<< endl;
char a ; 
cin>>a;
if(a>='a' && a<='z'){
    cout<<"a is a lowercase letter"<<endl;
}
else if(a>='A'&& a<='B'){
    cout<<"a is a uppercase word "<<endl;
}
else if(a>='0'&& a<='9'){
    cout<< "a is a numeric number "<<endl;
}
}