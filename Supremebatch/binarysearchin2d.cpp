#include <iostream>
#include <vector>
using namespace std;
int binarytwo(vector<vector<int>>a ,int target){
    int r = a.size();
    int c = a[0].size();
    int s = 0;
    int e = r*c -1;
    int mid = s + (e - s)/2;
    int ans = -1;
    int min = INT16;
    while(s<=e){
        int rowindex = mid /c;
        int colindex = mid % c;
        int element = a[rowindex][colindex];
        if(element == target){
            ans = mid;
            return ans;
        }
        else if(element > target){
            e = mid - 1 ;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return -1;
}
int main(){
    vector<vector<int>> b{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int ele;cin>>ele;
    cout<<binarytwo(b,ele)<<endl;
    int c = b[0].size();
    int rowin = binarytwo(b,ele)/c;
    int colin = binarytwo(b,ele) % c;
    cout<<rowin + 1<<"    "<<colin+1<<endl;
}