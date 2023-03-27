#include<iostream>
#include<vector>
using namespace std;
//                                          wrong method for pivot                       //

int pivot(vector<int> a){
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e -s)/2;
    int ans = -1;
    
    while(s<=e){
        if(a[mid + 1]<a.size() && a[mid]>a[mid +1]){
            return mid ;
        }
        if(a[mid - 1]>= 0 && a[mid - 1]>a[mid]){
            return mid-1;
        }
        if(a[s]>=a[mid])
        {
            e = mid -1;
        }
        else
        {
            s = mid +1;
        }
        mid = s + (e -s)/2;
    }
    
   /*
   while(s<e){
    if(a[mid]>a[0]){
        ans = mid;
        s = mid +1;
    }
    else{
        e = mid;
    }
    mid = s + (e -s)/2;
   }
    
    */
   return ans;
}

int main(){
    vector<int> b{1,2,3,1};
   int c = pivot(b);
    cout<<b[c]<<endl;s
}
