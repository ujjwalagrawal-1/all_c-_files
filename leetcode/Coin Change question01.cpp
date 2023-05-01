#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
        //base condition
        if(amount == 0){
            return 0;
        }  
        if(amount<0){
            return INT_MAX;
        }
        int mini = INT_MAX;
        for(int i = 0;i<coins.size();i++){
            int ans = coinChange(coins,amount-coins[i]);
            if(ans != INT_MAX`)
            mini = min(mini,ans + 1);
        }
        return mini;
    }

int main() {
  int N;cin>>N;
  vector<int> a(N);
  for(int i = 0;i<N;i++){
    cin>>a[i];
  }
  // for(int i = 0;i<N;i++){
  //   cout<<a[i];
  // }
  int target;cin>>target;
  cout<<coinChange(a,target);

}