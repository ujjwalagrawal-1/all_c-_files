#include <iostream>
using namespace std;
/*
int check(int arr [],int size){
    int mini = -1;
    for(int j =0;j<size-1;j++){
        for(int k = j+1;k<size;k++){
        int mini = min(arr[j],arr[k]);
        arr[j] == mini;
    }
    swap(arr[j],mini);
    }
    return arr;
}

int main(){
    int array [6]={64,25,96,52,36,85};
    int l = sizeof(array)/sizeof(int);
    check(array,l);
}
*/
int takearray(int arr [],int size){
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}
int process(int array[],int s ){
    for(int j =0;j<s-1;j++){
        int minindex = j;
        for(int k = j+1;k<s;k++){
            if(array[k]<array[minindex]){
                minindex = k;
            }
            
    }
    swap(array[minindex],array[j]);
}
for(int j =0;j<s;j++){
    cout<<array[j]<<" ";
}
}
int main(){
    int arr[100];
    int si;
    cin>>si;
    takearray(arr,si);
    process(arr,si);
}