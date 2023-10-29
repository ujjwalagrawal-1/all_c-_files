// #include<bits/stdc++.h>
// using namespace std;

// //Speed
// #define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// //Macros
// #define loop(i,j) for(int i=0;i<j;i++)
// #define rloop(i,j) for(int i=j-1;i>=0;i--)
// #define st(x) x.begin(), x.end()

// //Typedef
// typedef long long ll;
// typedef pair<int, int> pi;
// typedef vector<int> vec;
// typedef map<int,int> mp;

// // typedef unorderd_map<int,int> ump;

// typedef vector<vector<int>> dvec;
// typedef vector<pair<int,int>> vec_pair;
// typedef vector<pair<int,pair<int,int>>> vec_doublepair;
// typedef map<int,int> mp;
// typedef queue<int> q;
// typedef queue<pair<int,int>> doq;


// int main(){
// int k;cin>>k;
// int n;cin>>n;
// vector<int>arr(n);
//   for(int i = 0;i<n;i++){
//     cin>>arr[i];
//   }
//   int fb;cin>>fb;
//   vec abc(fb);
//   for(int i = 0;i<fb;i++){
//     cin>>arr[i];
//   }
//   vec_doublepair rth(fb);
//   int u = 0;
//   for(auto itr:arr){
//     rth.push_back({itr,{u,abc[u]}});
//     u++;
//   }
//   sort(st(rth));
//   int yu = 0;
//   int count = 0;
//   int point = 0;
//   for(int i = 0;i<arr.size()-1;i++){
//     int j = i+1;int lev1 = rth[yu].first;int lev2 = rth[j].first;
//     point += rth[i].second.first;
//     while(j<arr.size() && rth[j].first>=rth[i].first ){
//         if(lev2>=lev1){
//             point += rth[j].second.first;
//             if(point>=k){
//                 count++;
//             }
//             j++;
//             lev1 = lev2;
//         }
//         else{
//             j++;
//         }
//         point = 0;
//     }
//     cout<<count<<endl;
//   }
//         return 0;
// }

#include<bits/stdc++.h>
using namespace std;

//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define loop(i,j) for(int i=0;i<j;i++)
#define rloop(i,j) for(int i=j-1;i>=0;i--)
#define st(x) x.begin(), x.end()
#define check(itr,point) for(auto itr:point){cout<<itr.first<<"   "<<itr.second<<endl;}

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vec;
typedef map<int,int> mp;

typedef unordered_map<int,int> ump;

typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef vector<pair<int,pair<int,bool>>> vec_doublepair;
typedef map<int,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;




void solve(vec& height,vec_pair& point,int count,int i,int j,vec_pair& array,int &count,int point,int k){
    if(i>=point.size()-1){
        return;
    }
    if(j >= point.size()){
        if(point>=k){
            count++;
            return ;
        }
    }
    if(height[j].second < height[j-1].second){
        if(j<point.size()){
            solve(height,point,count,i,j+1,array,count,point,k)
        }
    }
    solve(height,point,count,)
}
int main(){
    int k;cin>>k;
    int N;cin>>N;
    vec height(N);
    int t = N;
    int u = 0;
    while(t--){
        int input;cin>>input;
        height[N-t-1] = {input,u};
        u++;
    }
    sort(st(height));
    vec_pair point(N);
    cin>>t;
    
    while(t--){
        int input;cin>>input;
        point[N-t-1] = input;
    }
    // check(itr,point);
    // sort(st(height));
    int count;
        return 0;
}