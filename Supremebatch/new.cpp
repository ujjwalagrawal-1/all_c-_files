#include <iostream>
#include <vector>
using namespace std;
int pivot(vector <int> a){
        int s = 0;
        int e = a.size() - 1;
        int mid = s + (e - s)/2;
        while(s<=e){
            if(mid + 1< a.size() && a[mid] > a[mid + 1]){
                return mid;
            }
            if(mid - 1> 0 && a[mid - 1] > a[mid]){
                return mid -1 ;
            }
            if(a[s] >= a[mid]){
                e = mid - 1;
            }
            else 
            {
            s = mid = 1;
            }
            mid = s + (e - s)/2;
        }
}
int main () {
        vector <int> nums{4,5,6,7,0,1,2};
        int target;cin>>target;
        int g = pivot(nums);
        /*
        if(target >= nums[0] && target <= nums[g]){
        int k =  binarysearch(nums,target,0,g);
        cout<<k<<endl;
        }
        else{
        int i =  binarysearch(nums,target,g+1,nums.size()-1);
        cout<<i<<endl;
        }
        */
       cout<<g<<endl;
    }