/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int semisorting(vector<int>a,int target){
    sort(a.begin(),a.end());
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e -s)/2;
    while(s<=e){
        if(target == a[mid]){
            return mid;
        }
        if(target == a[mid - 1]){
            return mid -1;
        }
        if(target == a[mid + 1]){
            return mid;
        }
        if(target >= a[mid]){
            s = mid + 2;
        }
        else{
            e = mid - 2 ;
        }
        mid = s + (e -s)/2;
    }
    return -1;
}
int main () { 
 vector<int>b{10,3,40,20,50,80,70};
 cout<<semisorting(b,20);
}
*/
 /////////////////////////////// Divide 2 numbers using Binary Search //////////////////////////////////////////
 #include <iostream>
 #include <vector>
 using namespace std;
 int quotient(int divident,int divisor){
    int s = 0;
    int e = divident;
    int mid = s + (e -s)/2;
    int ans; 
    while(s<=e){
        if(mid*divisor == divident)
        ans = mid;
        else if(mid*divisor > divident){
            e = mid - 1;
        }
        else{
            
            s = mid + 1;
            ans = mid;
        }
        mid = s +(e -s)/2;
    }
    if((divident > 0 && divisor >0 ) || (divident < 0 && divisor <0))
    return ans;
    else{
        return -ans;
    }
 }
 int main(){
    int a,b;cin>>a>>b;
    cout<<quotient(a,b);
 }