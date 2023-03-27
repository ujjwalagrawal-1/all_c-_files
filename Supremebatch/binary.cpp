#include <iostream>
#include <vector>
using namespace std;
int main() {
    int target;
    cin>>target;
    int arr[12] = {1,2,3,4,5,6,7,8,9,10,50,96};
    int s = 0;
    int e = 11;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        if(target == arr[mid]){
            ans = mid; 
        }
        if(arr[mid]<target){
            s = mid + 1;
            
        }
        else{
            e = mid -1;
        }
        mid = s + (e - s)/2;
    }
    cout<<ans;
}