#include <iostream> 
using namespace std;
/*
int firstoccurence(int arr[], int n, int x){
    int s =0;
    int e = n - 1;
    int mid = s +(e -s)/2;
    int ans1 =0;
    while(s<=e){
    if(arr[mid] == x){
        ans1 = mid;
        e = mid -1;
    }
    else if(arr[mid]>x){
        e = mid -1;
    }
     else if(arr[mid]<x){
        s = mid +1;
    }
    mid = s +(e -s)/2;
   }
   return ans1;
}
int lastoccurence(int arr[], int n, int x){
    int s = 0;
    int e = n - 1;
    int mid = s +(e - s)/2;
    int ans2 = 0;
    while(s<=e){
    if(arr[mid] == x){
        ans2 = mid;
        s = mid + 1;
    }
    if(arr[mid]>x){
        e = mid -1;
    }
    else{
        s =mid+1;
    }
    mid = s +(e -s)/2;
   }
   return ans2;
}
	int main (){
    int x = 4;
	int arr[7] = {1,1,2,2,2,2,3};
    int n =7;
    if
	int output = lastoccurence(arr,n,x) - firstoccurence(arr,n,x) + 1;
	cout<<output<<endl;
	}
    */
   int main() {
   int n;
   cin>>n;
   int k = n;
   for(int i =1;i<=n;i++){
    for(int j = 1;j<k;j++){
        cout<<" ";
    }
    cout<<1;
    k--;
    /*if(i == 1){
        cout<<endl;
    }
    */
    if(i>=2 && i<=n-1){
    for(int l = 1;l<=2 *i -3;l++){
        cout<<" ";
    }
    cout<<i;
   }
   if(i == n){
    cout<<" ";
    for(int m = 2;m<=n;m++){
        cout<<m<<" ";
    }
   }
   cout<<endl;
   }
   }