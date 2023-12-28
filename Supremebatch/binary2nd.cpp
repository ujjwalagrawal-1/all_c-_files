#include <iostream>
#include <vector>
using namespace std;
int firstoccurence(vector<int> a,int element){
  int s = 0;
  int e = a.size() - 1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s<=e){
    if(a[mid] == element){
      ans = mid;
      e = mid -1;
    }
    else if(a[mid]  > element){
      e = mid - 1;
    }
    else{
      s = mid +1;
    }
    mid = s + (e - s)/2;
  }
  cout<<ans<<endl;
}
int lastoccurence(vector<int> a,int element){
  int s = 0;
  int e = a.size() - 1;
  int mid = s + (e - s)/2;
  int ans = -1;
  while(s<=e){
    if(a[mid] == element){
      ans = mid;
      s = mid + 1 ;
    }
    else if(a[mid] > element){
      e = mid - 1;
    }
    else{
      s = mid +1;
    }
    mid = s + (e - s)/2;
  }
  cout<<ans<<endl;
}
int pivot(vector<int> a){
  int s = 0;
  int e = a.size() - 1;
  int mid = s +(e -s)/2;
  int ans = -1;
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
  cout<<ans<<endl;
}

int main() {
  
  vector<int> a{7,9,10,89,1,2,3};
 // input(a);
  /*
  firstoccurence(a,n);
  lastoccurence(a,n);
  */
  pivot(a);
}