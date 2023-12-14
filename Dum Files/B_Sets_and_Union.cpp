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

// typedef unordered_map<int,int> ump;

typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef vector<pair<int,pair<int,bool>>> vec_doublepair;
// typedef map<int,pair<bool,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;



int main(){
int N;cin>>N;
  for(int i = 0;i<N;i++){
    map<int,pair<bool,int>> hash;
    int x;cin>>x;
    dvec input(x);//double vector 
    loop(j,x){
    int y;cin>>y;
    vec col(y);
    loop(k,y){
        int in;cin>>in;
        int x = hash[in].second;
        x++;
        hash[in] = make_pair(true,x);
        col[k] = in;
    }
    input[j] = col;
    }
    int maxi = INT_MIN;
    int flag = 0;
    loop(j,input.size()){
        int count = 0;
            // cout<<hash.size()<<endl;
            if(input[j].size() == 1){
                flag = 1;
                break;
            }
        loop(k,input[j].size()){
            int in = input[j][k];
            // for(auto itr:hash){
            //     cout<<itr.first<<"   -> "<<itr.second.second<<endl;
            // }
            // cout<<"khatam"<<endl; 
            if(hash[in].second == 1){
                // cout<<"phela elemnt = "<<hash[in].first<<endl;
                count++;
            }
        }

        // cout<<"count == "<<count<<endl;
        if(count != 0){
        int ti = hash.size()-count;
        // cout<<ti<<endl;
        maxi = max(maxi,ti);
        }
    }
    if(flag){
        maxi = hash.size()-1;
    }
    cout<<maxi<<endl;
            // cout<<"type"<<endl;
  }
        return 0;
}