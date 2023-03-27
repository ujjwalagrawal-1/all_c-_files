#include <iostream>
using namespace std;

int sqrtininteger(int n){
    int s = 0;
    int e = n;
    int mid = s + (e - s)/2;
    int ans = -1;
    while(s<=e){
        int square = mid*mid;
        if(square == n){
            ans = mid ;
            return ans;
        }
        if(square > n){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
 int main () {
    int n;
    cin>>n;
    return sqrtininteger(n);
 }