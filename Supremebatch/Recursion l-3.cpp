#include <iostream>
#include <vector>
using namespace std;
void printsubstring(string str,string output,int i){
  // Base Condition 
  if(i>=str.length()){
    cout<<output<<endl;
    // answer.push_back(output);
    return;
  }
  // include
  output.push_back(str[i]);
  printsubstring(str,output,i+1);
  output.pop_back();
  // exclude
  printsubstring(str,output,i+1);
  
}
void printsubstrig(string str,string output,int i){
  // Base Condition 
  if(i>=str.length()){
    cout<<output<<endl;
    // answer.push_back(output);
    return;
  }
  
  // exclude
  printsubstrig(str,output,i+1);
  // include
  output.push_back(str[i]);
  printsubstrig(str,output,i+1);
}
int main() {
  string str = "ujjwal";
  string output = "";
  //vector<string> answer;
  int i = 0;
  printsubstring(str,output,i);
  cout<<"new programme"<<endl;
  printsubstrig(str,output,i);
  // for(auto& print :answer){
  //   cout<<print<<endl;
  // }
}