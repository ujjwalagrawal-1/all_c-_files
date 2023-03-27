#include<iostream>
#include<math.h>
using namespace std;
/*int power(int num1 , int num2){
    int ans =1;
    for(int i = 1;i<=num2;i++){
        ans = ans * num1;
    }
    return ans;
    */
   /*
    int iseven(int num3){
        if(num3%2 == 0){
        cout<<"Is Even";
        }
        else{
            cout<<"Is Odd";
        }
    } 
    int main() {
        int b; 
        cin>>b;
        int a = iseven(b);
    }
    */
    /*
int main(){
  /*  int a,b;
    cin>>a>>b;
    int pov = power(a,b);
    cout<<pov<<endl;
    
    
}
*/

// New Programm


/*
int factorial(int n){
    int facto = 1;
    while(n!=0){
         facto = n * facto;
        n--;
    }
    return facto; 
}
    int ncr(int a,int b)
    {
        int c = factorial(a);
        int d = factorial(b);
        //int e = (a - b);so we can put any variable in ().
        int f = factorial(a - b);
        int ans = c/(d*f);
        return ans;
    }
    int main() {
        int a,b;
        
        cin>>a>>b;
         //g = ncr(a,b);we can apply function with cout
        cout<<ncr(a,b);
    }
    */
   // NEW PROGRAMM 
   /*
   int isprime(int n){
    int a,b;
    b = 0 ;
    for(int i = 1;i<=n;i++){
    a = n % i;
    if(a == 0){
        b++;
    }
   }
   if(b == 2){
    cout<<"Is Prime Number"<<endl;
   }
   else{
    cout<<"It is a composite Function"<<endl;
   }}
   int main() {
    int n;
    cin>>n;
    cout<<isprime(n)<<endl;
   }
   */
  
/*
  // New programme

int ap(int n){
    int a = (3 * n + 7);
    return a;
}
int main () { 
    int b;
    cin>>b;
    cout<<ap(b)<<endl;
}
*/
 // New Programm

 //fibonacci Functioning
 int fibo(int n){
    if(n == 1){
        cout<<0<<endl;
    }
    if(n == 2){
        cout<<1<<endl;
    }
    else{
    int a = 0,b = 1,sum = 0,d ,c;
    for(int i = 1;i<=(n - 2);i++){
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
 }}
 int main() {
    int x;
    cin>>x;
    cout<<fibo(x);
 }

