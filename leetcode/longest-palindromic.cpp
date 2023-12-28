#include <iostream>
#include <string.h>
using namespace std;

bool ispalindrom(string& str,int s,int e){
  while(s<e){
    if(str[s] != str[e]){
      return false;
    }
    s++;e--;
  }
  return true;
}

int main() {
  string s;
  cin>>s;
  string h;
  string ans = "";
  for(int i = 0;i<s.size();i++){
    for(int j = i;j<s.size();j++){
      if(ispalindrom(s,i,j)){
        string t = s.substr(i,j-i+1);
        //conditional operator very useful in such cases;
        h = t.size()>ans.size() ? t : ans;
      }
    }
  }
  cout<<h<<endl;
  
}