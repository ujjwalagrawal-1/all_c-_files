#include <iostream>
using namespace std;
void lastoccu(string& ch,int i,char& target,int& ans){
  // base condition
  if(i>=ch.length()){
    return;
  }
  if(ch[i] == target)
   ans = i;
  lastoccu(ch,i+1,target,ans);
}

int main() {
  string input;
  getline(cin,input);
  int i = 0;
  char target;cin>>target;
  int ans = 0;
  lastoccu(input,i,target,ans);
  cout<<ans+1;
}