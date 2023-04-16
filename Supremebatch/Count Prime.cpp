#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;cin>>n;
  if(n<=1)return false;
  vector<bool>ninja(n,true);
  int ans = 0; 
  for(int i = 2;i<ninja.size();i++){
    if(ninja[i]){
      ans++;

      for(int j = 2*i;j<n;j+=i){
        ninja[j] = false;
      }
    }
  }
  cout<<ans;
}