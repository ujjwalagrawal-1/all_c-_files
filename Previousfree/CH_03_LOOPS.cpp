#include<iostream>
using namespace std;
int main() {
    /*
    cout << "Hello This Is my Third Programm"<< endl;
    int sum1 = 0;
    int sum2 = 0;
    int n;
    cin >> n;
    cout<<"All even nos are"<<"\n";
    for(int i = 0;i<=n;i++){
        if(i%2 == 0){
            cout<<i<<",  ";
            sum1 = sum1 + i;      
        }   
    }
    cout <<endl;
    cout<<"All odd nos are"<<"\n";
    for(int j = 0;j<=n;j++){        
        if(j%2 == 1){
            cout<<j<<",   ";
            sum2 = sum2 + j;
        }
}
  cout <<"\n sum of all even Nos are" <<sum1<< endl ; 
    cout <<"\n sum of all odd Nos are" <<sum2<< endl ;
*/
    // Entering Prime No.
    /*
    cout<< "Please Enter any no."<<endl;
    int i = 0;
    int n;
    cin>>n;
    for(int x=1;x<=n;x++){
        if(n%x == 0 ){
            i = i + 1;
        }
    }
    if(i == 2){
        cout << "Yes It is A Prime No"<<endl;
    }
    else if(i==1){
        cout << "It is a Composite No"<<endl;
    }
    else
    {
        cout<<"It is Not a Prime No "<<endl;
    }
    
   // Making the Pattern
   for(int k =0;k<4;k++){
    for(int l =0;l<4;l++){
        cout<<"*";
    }
    cout<<"\n";
   }
   */
  // Making Another Pattern ;
  /*
  for(int m =1;m<=4;m++){
    for(int n =1;n<=m;n++){
        cout<<m;
    }
    cout<<"\n";
   }
   */
 // New Pattern series nothing but simple counting
 int n;
 cin>>n;
 int c = 1; 
 for(int a = 1;a<=n;a++){
    for(int b =1;b<=n;b++){
        cout<<c<<" ,";
        c = c + 1 ;
    }
    cout<<endl;
 }
}