#include <iostream>
#include <vector>
#include<math.h>
#include <algorithm>
using namespace std;
int main(){
    vector<int> nums{1,1,1,1,1,1,1};
    // Very Wrong method;
    /*
    int k = 0, out = 0,t = 0;
    for(int i = 0;i<nums.size();i++){
        int min = INT16_MIN;
        for(int j = i+1;j<nums.size();j++){
            if(nums[i] == nums[j]){
                nums[j] = min/j;
                
                t++;
            }
            }
            
            }
    
    if(k==0 && t>0){
        out++;
    }
    for(int i = 0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            int y = nums[i] - nums[j];

            if(abs(y) == k){
                out++;
            }
            
        }
    }
    cout<<out<<endl;
    */
   /*
   sort(nums.begin(),nums.end());
   int i = 0,j = i+1,k = 0,count = 0;

   while(j != nums.size()){
    int diff = nums[j] - nums[i];
    if(diff = k){
        count++;
        i++;j++;
    }
    else if(diff > k){
        i++;
    }
    else{
    j++;
   }
   }
   cout<<count<<endl;
*/

// By Binary search Method
int k;
sort(nums.begin(),nums.end());
int s = 0;
int ans = 0;
int e = nums.size() -1;
int mid = s + (e -s)/2;
int m;
for(int i = 0;i<nums.size();i++){
    m = k + nums[i];

while(s<=e){
    if(m == nums[mid]){
        ans++;
        return 1;
    }
    else if(m > nums[mid]){
        s = mid +1;
    }
    else{
        e = mid - 1;
    }
    mid = s + (e -s)/2;
}
return 0;
}
cout<<ans<<emindl;
}