#include <iostream>
using namespace std;
// DSA ON BINARY SEARCH
    //Finding index of the array using monotonic function use.


void process(int arr[], int size ,int element){
    int start = 0;
    int end = size -1;
    // Problem Becoz of int mid = (start + end)/2;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(element == arr[mid]){
            cout<<mid;
        }
        if(element > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}
int main() {
    int arra[6] = {1,2,3,4,5,6};
    int ele;
    cin>>ele;
    process(arra,6,ele);
}