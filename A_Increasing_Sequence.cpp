#include<bits/stdc++.h>
using namespace std;

int main(){
int N;cin>>N;
  for(int i = 0;i<N;i++){
    int x;cin>>x;
    vector<int> veci(x);
    
    int ct = 0;
    while(ct<x){
        int in;cin>>in;
        veci[ct] = in;
        ct++;
    }
    vector<int> b;
    int index = 0;
        int j = 0;
        for(int k = 1;b.size() != x;k++){
            if(k == veci[j] && j == index){
                j++;
                continue;
            }
            else{
            b.push_back(k);
            if(index == j){
                j++;
            }
            index++;
            }
        }
        cout<<b[b.size()-1]<<endl;
  }
        return 0;
}