#include <iostream>
using namespace std;
int takearray(int arr[] , int size){
    for(int i= 0;i<size;i++){
        cin>>arr[i];
    }
}
int firstoccur(int arr[],int n , int element){
    int start = 0 ;
    int end = n - 1 ;
    int ans1 = -1 ;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            ans1 = mid;
            end = mid - 1 ;
        }
        else if(arr[mid] > element){
            end = mid - 1;
        }
        else if(arr[mid] < element){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
     int y = ans1;
     //return y;
     cout<<y<<endl;
}
int lastoccur(int arr[],int n , int element){
    int start = 0;
    int end = n - 1 ;
    int ans2 = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == element){
            ans2 = mid;
            start = mid + 1;
        }
        else if(arr[mid] > element){
            end = mid - 1;
        }
        else if(arr[mid] < element){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
     int x = ans2;
     //return x;
     cout<<x<<endl;
}
int main () {
    cout<<"Please Give the Size of the Array"<<endl;
    int s;
    cin>>s;
    int array1[100];
    cout<<"Please Input the array with  "<<s<<"  Element"<<endl;
    takearray(array1,s);
    int ele;
    cout<<"Please Enter the Element whose Index do you want"<<endl;
    cin>>ele;
    cout<<"First Occurance of the Eleament is"<<endl;
    firstoccur(array1,s,ele);
    cout<<"last Occurance of the Eleament is"<<endl;
    lastoccur(array1,s,ele);
    cout<<"Find The Occurance of the Number    "<<ele<<endl;
    int z = (lastoccur(array1,s,ele) - firstoccur(array1,s,ele)) + 1;
    cout<<z;
    }