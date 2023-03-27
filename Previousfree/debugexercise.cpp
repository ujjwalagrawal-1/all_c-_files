#include <iostream>
using namespace std;
#include <math.h>
/*
int main()
{
int  n;
cout << "Enter the number of rows : ";
cin >> n;
cout << " ";
for (int i=1; i<=n; i++)
{

for (int j=1; j<=n-i; j++)
{
cout << " ";
}

for (int j=1; j<= 2*i-1; j++)
{

cout << "*";
}
cout<<endl;
}
return 0;
}
*/
int area_of_fig(int radius){
    int ans = (22/7)*pow(radius,2);
    return ans;
}
int even_or_odd(int num){
    if(num%2 == 0){
        cout<<" It is a Even number"<<endl;
    }
    else{
        cout<<" It is a odd number"<<endl;
    }
}
int getprimenum(int num){
    int sum = 0;
    for(int i = 1;i<=num;i++){
        if(num%i == 0){
            sum++;
        }
    }
    if(sum == 2){
        cout<<"Number is a prime number"<<endl;
    }
    else{
        cout<<"Number is not a prime number"<<endl;
    }
}
int prime_num(int num){
    for(int i = 1;i<=num;i++){
        if(num%i == 0){
            
        }
    }
}
int main(){
    int marks;
    cin>>marks;
    getprimenum(marks);
}
