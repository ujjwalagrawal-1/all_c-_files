#include <iostream> 
using namespace std;
int takeinput(int arr[],int s){
    for(int i =0;i<s;i++){
        cin>>arr[i];
    }
}
int output(int arr[],int s){
    for(int i =0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}
int main (){
    int n,array[100];
    cin>>n;
    takeinput(array,n);
    for(int i = 1;i<n;i++){//n-1 rounds
        for(int j = 0;j<n-i;j++){
            if(array[j]>=array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
    output(array,n);
}