//////////////////////////////////////////// by BINARY SEARCH METHOD  //////////////////////////////////
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int oddo(vector<int> a){
  int s = 0;
  int e = a.size() - 1;
  int mid = s + (e -s)/2;
  while(s<=e){
    if(s == e){
      return s;
    }
    if(mid%2 == 0){
    if(a[mid] == a[mid + 1]){
      s = mid + 2;
    }
      else{
        e = mid;
      }
}
    else{
      if(a[mid] == a[mid - 1]){
        s = mid + 1;
      }
      else{
        e = mid - 1;
      }
    }
    mid = s + (e -s)/2;
  }
  return -1;
}
int main () { 
  vector<int> b{1,1,2,2,3,3,4,4,3,600,600,4,4};
  int ans = oddo(b);
  cout<<ans<<endl;
  }