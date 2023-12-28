#include <iostream>
using namespace std;
int input(int arr[], int size){
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}
int process(int arr[],int n){
    int s = 0;
    int e = n - 1 ;
    int mid = s + (e - s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[s]){
            s = mid +1;
        }
    else{
        e = mid;
    }
    mid = s + (e - s)/2;
}
cout<<s<<endl;
}
int main() {   
    int s;
    cin>>s;
    int array1 [s];
    input(array1,s);
    process(array1,s);
}


/*
#include <bits/stdc++.h>
int getpivot(vector<int>& arr,int n){
    int s = 0;
    int e = n - 1 ;
    int mid = s + (e - s)/2;
    while(s<e)
    {
        if(arr[mid] > arr[s]){
            s = mid +1;
        }
    else{
        e = mid;
    }
    mid = s + (e - s)/2;
}
return s;
} 
int binarysearch(vector<int>& arr,int st,int en,int ele){
    int start = st;
    int end = en;
    if(end<0){
        end = 0;
    }
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == ele){
        return mid;
        }
        else if(arr[mid] > ele){
            end = mid -1;
        }
        else{
             start = mid + 1;
        }
         mid =start + (end - start)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getpivot(arr,n);
    if( n -1 < pivot){
          pivot = n -1 ;
    }
    if(k >= arr[pivot] && k<=arr[n -1]){
        
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot - 1,k);
    }
}

