#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main() {
  vector<string> s;
  string str = "noon";
  int c = 0,i = 0,j = 1;
 // for(int i = 0;i<str.length() - 1;i++){
   // for(int j = i+1;j<str.length();j++){
        s[c].push_back(str[i]);
        s[c].push_back(str[j]);
        c++;
        cout<<s[0]<<endl;
    }
    //s[c+1] = s[c];
  //}
  //cout<<s[0]<<endl;
   // }