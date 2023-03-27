#include<iostream>
using namespace std;
int main() {
    /*
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
 
 // pattern 2 (Decreasing Star)
 cout<<"Decreasing Star"<<endl;
 int d;
 cin>>d;
 for(int e =1;e<=d;e++){
    for(int f = 1;f<=e;f++){
    cout<<"*";
 }
 cout<<endl;
}
// another same as above 
cout<<"Decreasing Star"<<endl;
 int d;
 cin>>d;
 for(int e =1;e<=d;e++){
    for(int f = 1;f<=e;f++){
    cout<<f;
 }
 cout<<endl;
}
// another same as above 2
cout<<"Decreasing Star"<<endl;
 int d;
 cin>>d;
 for(int e =1;e<=d;e++){
    for(int f = 1;f<=e;f++){
    cout<<e;
 }
 cout<<endl;
}
*/
//New Pattern
/*
int g;
cin>>g;
int num = 1;
for(int j = 1;j<=g;j++){
    for(int  i = 1;i<=j;i++){
    cout << num<< ",  ";
    num = num + 1;
}
cout<<endl;
}
*/
/*
// New Patten
cout<<"New programm"<< endl;
int a;
cin>>a;

for(int row = 1;row<=a;row++){
   int value = row;
   for(int col=1;col<=row;col++){
  cout<<value<< ",  ";
  value = value +1;
   }
   cout<<endl;
}
*/
// new pattern
/*
cout<<"Scanning My Name"<<endl;
int a;
cout<<"Please Enter The number of Rows  :";
cin>>a;
for(int row = 1;row<=a;row++){
   for(int col = row;col>=1;col--){
      cout<<col <<"  ";
   }
   cout<<endl;
}
*/
//New Pattern charcater using.
/*
int a;
cin>>a;
for(int row =0;row<a;row++){
   for(int col = 1;col<=a;col++){
      char j = 'A' + row;
      cout<<j<<"  ";
   }
   cout<<endl;
}
*/
//New Patter 
/*
int b;
cin>>b;
for(int row = 0 ;row<b;row++){
for(int col = 0 ;col<b;col++)
{
char c = 'A' + col + row;
cout<<c;
     }
     cout<<endl;
   }
   */
   //New Patter
   /* 
int b;
cin>>b;
for(int row = 0 ;row<b;row++){
for(int col = 0 ;col<=row;col++)
{
char c = 'A'+ row;
cout<<c;
     }
     cout<<endl;
   }
   */
  //New Patter 

/*
//New Patter 
  int a;
  cin>>a;
  int value = 0;
for(int row = 0 ;row<=a;row++){
   for(int col =0;col<=row;col++){
      char j = 'A'+ value;
      value = value + 1;
      cout<<j;
   }
   cout<<endl;
}
*/
//New Patter 
  int a;
  cin>>a;
  int value = 0;
for(int row = 0 ;row<=a;row++){
   char col = row ;
   for(int b =0;b<=row;b++){
      char k =  'A' + col + b; 
      cout<<k;
   }
   cout<<endl;
}

}