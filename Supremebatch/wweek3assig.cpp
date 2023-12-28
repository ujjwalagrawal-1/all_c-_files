#include <iostream>
#include <vector>
using namespace std;
// Two Pointer Aproch to sort a matrix in a transparent way 
int main(){
    int arr[9] = {1,2,4,5,8,-2,-5,-7,-8};
    int l = 0,h = 8;
    while(l<h){
    if(arr[l]<0){
        l++;
    }
    else if(arr[h]>0){
        h--;
    }
    else{
        swap(arr[l],arr[h]);
    }
    }
    for(auto val : arr){
        cout<<val<<" ";
    }
    /*
    for(int i = 0;i<h;i++){
        cout<<arr[i]<<"  ";
    }
*/}