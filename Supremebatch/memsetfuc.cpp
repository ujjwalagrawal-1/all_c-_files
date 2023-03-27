/*
#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char str[]="This is my programme";
   // memset(str,'t',sizeof(str));
    cout<<<<endl;
}
*/


 ////////////////////                              New Programme               //////////////////////////////////////
/*
#include <iostream>
using namespace std;

int takearray(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
}
// To Find minimum of the number.
int mini(int array [],int size){
  int x  = INT16_MAX;
   for(int i = 0;i<size;i++){
    if(array[i]<x){
      x = array[i];
    }
  }
  return x;
}

int main() {
  cout << "Minimum of the Number" <<endl;
  int num [50];
  int x;
  cin>>x;
  takearray(num,x);
  cout<<mini(num,x)<<endl;
}
*/
 /////////////////////////                        New Programme                    /////////////////////////////////
 /*
 #include <iostream>
 using namespace std;

int takearray(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
}
int programme(int arr [],int size){
    int zero =0,one = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] == 0){
            //then 
            zero++;
        }
        else if(arr[i] == 1){
            //then 
            one++;
        }
    }
    cout<<zero<<"   "<<one<<endl;
}
int main(){
    int abc[50],b;cin>>b;
    takearray(abc,b);
    programme(abc,b);
}
*/
////////////////////////////////             new programme                      ////////////////////////////////////
#include <iostream>
using namespace std;
int takearray(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        cin>>arr[i];
    }
}
int reversearray(int arr [],int s){
int start = 0;
int end = s - 1;
while(start<=end){
    swap(arr[start],arr[end]);
    /*
    if(arr[start] == arr[end]){
        cout<<arr[start];
    }
    else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
    }
    */
    start++;
    end--;
}
}
int outputarray(int arr[],int size){
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int arr [50],s;cin>>s;
    takearray(arr,s);
    reversearray(arr,s);
    outputarray(arr,s);
}