#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int exposearch(vector<int> b,int target){
 
  int i= 1;
  while(b[i]<target && i<b.size()){
     if(b[0] == target)return 0;
    i*=2;
  }
  return i;
}
int bs(vector<int> r,int s,int e,int target){
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s<=e){
    if(r[mid] == target){
      ans = mid;
      e = mid -1;
    }
    else if(r[mid] > target){
      e = mid -1;
    }
    else{
      s = mid + 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
int main() {
  int t;cin>>t;
  vector<int> a{1,2,3,4,5,6,7,8,9,10,11,12};
  sort(a.begin(),a.end());
  int my = exposearch(a,t);
  cout<<bs(a,my/2,min(a[my],a[a.size()-1]),t);
}