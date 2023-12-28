#include <iostream>
#include <vector>
using namespace std;
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
  return ans;
}
int firstoccurence(vector<int> a,int element){
  int s = 0;
  int e = pivot(a);
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
  return ans;
}
int nextoccurance(vector<int> a,int element){
  int s = pivot(a) + 1;
  int e = a.size() -1;
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
  return ans;
}
int main(){
    vector<int> nums{4,5,6,7,0,1,2};
    int target;
    cin>>target;
    if(target <= pivot(nums) && target >= nums[0]){
            cout<<firstoccurence(nums,target)<<endl;
        }
        else{
             cout<<nextoccurance(nums,target)<<endl;   
        }
}