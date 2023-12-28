#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int minti(int array[],int size){
int x = INT_MAX;
   for(int i = 0;i<size;i++){
    if(array[i]<=x){
      x = array[i];
    }
  }
  return x;
}
int main() {
  cout << "Hello World" << endl;
  int arr[50]= {12,13,48,51,2,36,41,75,51,2,4,2,6,7};
  int t = 14;
  cout<<minti(arr,t)<<endl;
}