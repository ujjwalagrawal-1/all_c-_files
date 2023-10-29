#include<bits/stdc++.h>
using namespace std;

//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define loop(i,j) for(int i=0;i<j;i++)
#define rloop(i,j) for(int i=j-1;i>=0;i--)
#define st(x) x.begin(), x.end()

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vec;
typedef map<int,int> mp;

// typedef unorderd_map<int,int> ump;

typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef vector<pair<int,pair<int,bool>>> vec_doublepair;
typedef map<int,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;


void solve(vector<string> &veci,string str,int i,int j){
    if(i>=str.size()){
        return;
    }
    if(j>=str.size()){
        j = i+1;
        solve(veci,str,i+1,j);
        return;
    }
    string st = str;
    swap(str[i],str[j]);
    veci.push_back(str);
    str = st;
    solve(veci,str,i,j+1);
}

int main(){
    string str;
    cin>>str;
    int i = 0,j = 0;
    vector<string>veci;
    solve(veci,str,i,j);
    for(auto itr:veci){
        cout<<itr<<" ";
    }
        return 0;
}