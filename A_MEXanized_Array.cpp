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
int main(){
int N;cin>>N;
  for(int i = 0;i<N;i++){

    // taking input
    int n,k,x;
    cin>>n>>k>>x;
    // array initialization
    vec arr(n);
    int t = 0;
    // making flag which Indicate the Wrong case

    for(int j = 0;j<n;j++){
        if(t == x && t == k)t--;
        else if((t == k) || t>=x){
            t = x;
        }
        arr[j] = t;
        t++;
    }
    // for(auto itr:arr){
    //     cout<<itr<<"  ";
    // }
    // cout<<endl;
        int flag = 0;
    if(arr[arr.size()-1] == arr[arr.size()-2]){
        if( k != x){
        if(k>arr[arr.size()-1]){
            flag = 1;
        }
        if(n == x+2 && k == x+1)flag = 0;
        }
    }
    else{
        if(n == k){
            flag = 0;
        }
        else if(n<k){
            flag = 1;
        }
        else if(k>arr[arr.size()-1]){
            flag = 1;
        }
    }
    
    // cout<<endl;
    int sum = 0;
    for(auto itr:arr){
        if(flag){
            sum = -1;
            break;
        }
        sum += itr;
    }
    cout<<sum<<endl;
  }
        return 0;
}