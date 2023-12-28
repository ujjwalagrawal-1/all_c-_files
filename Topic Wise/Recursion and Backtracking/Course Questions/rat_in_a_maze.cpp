/*DSA Temaplate Author -> Ujjwal Agrawal
⠀⠀⠀⣠⣴⣶⠿⠿⣷⣶⣄⡀⠀⠀⠀
⠀⢠⣾⡟⠉⠀⠀⠀⠀⠈⠻⣿⣆⠀⠀
⠀⣿⡏⠀⣴⣄⠀⠀⣠⣤⡄⠸⣿⡄⠀
⠀⣿⣇⠀⠈⠻⠇⠐⠿⠋⠀⢠⣿⠇⠀
⠀⠘⠿⣷⣦⡄⠀⠀⠀⣤⣶⡿⠋⠀⠀
⠀⠀⠀⠀⢿⣷⣤⣤⣴⣿⠃⠀
⠀⠀⠀⠀⠀⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀
*/
#include <bits/stdc++.h>
using namespace std;
//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define pb push_back
#define pp pop_back
#define F first
#define S second
#define foreach(i, j, k, in) for(int i=j;i<k;i+=in)
#define rforeach(i, j, k, in) for(int i=j;i>=k;i-=in)
#define rep(i,j) foreach(i,0,j,1)
#define rrep(i,j) rforeach(i,j,0,1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define sz(s) (int)(s.size())
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) int x; cin>>x;
#define inll(x) long long int x; cin>>x;
#define instr(x) string x; cin>>x;
#define all(x) x.begin(), x.end()
#define os(x) cout << x << " ";
#define out(x) cout << x << endl;
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(x) accumulate(all(x), 0LL)
#define COUNT(x,u) count(all(x), u)
#define B break
#define C continue
#define ps(x,y) fixed<<setprecision(y)<<x

// Typedef
typedef long long ll;typedef pair<int, int> pi;typedef vector<int> vec;typedef vector<char> vec_ch;typedef map<int,int> mp;typedef unordered_map<int,int> ump;typedef vector<vector<int>> dvec;typedef vector<pair<int,int>> vec_pair;typedef vector<pair<int,pair<int,bool>>> vec_db_pr;typedef map<int,int> mp;typedef queue<int> q;typedef queue<pair<int,int>> doq;typedef vector<char> vch;typedef set<char> sc;typedef set<int> si;typedef set<ll> sl;typedef set<string> ss;

// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T, typename V> // cout << map<T,T>
ostream& operator<<(ostream &ostream, const map<T,V> &c) { for (auto &it : c) cout << it.first << " " << it.second<<endl; return ostream; }



//functions Area -->

bool isSafe(int i,int j,int row,int col,vector<vector<bool>> &visited,vector<vector<int>> &veci){
    if(i>=0 && i<row-1 && j>=0 && j<col-1 && !visited[i][j] && veci[i][j] == 1){
        return true;
    }
    else{
        return false;
    }
}
void SolveMaze(int i,int j,int row,int col,vector<vector<bool>> &visited,vector<string> &ans,string path,vector<vector<int>> &veci){
    // cout<<"type"<<endl;
    if(i == row-1 && j == col-1){
        ans.push_back(path);
        return;
    }
    //Down
    if(isSafe(i+1,j,row,col,visited,veci)){
        visited[i+1][j] = true;
        SolveMaze(i+1,j,row,col,visited,ans,path + 'D',veci);
        // Now backtracking bro
        visited[i+1][j] = false;
    }
    // Left
    if(isSafe(i,j-1,row,col,visited,veci)){
        visited[i][j-1] = true;
        SolveMaze(i,j-1,row,col,visited,ans,path + 'L',veci);
        // Now backtracking bro
        visited[i][j-1] = false;
    }
    // Right
    if(isSafe(i,j+1,row,col,visited,veci)){
        visited[i][j+1] = true;
        SolveMaze(i,j+1,row,col,visited,ans,path + 'R',veci);
        // Now backtracking bro
        visited[i][j+1] = false;
    }
    // Up
    if(isSafe(i-1,j,row,col,visited,veci)){
        visited[i-1][j] = true;
        SolveMaze(i-1,j,row,col,visited,ans,path + 'U',veci);
        // Now backtracking bro
        visited[i-1][j] = false;
    }
}

int32_t main()  
{
    bullet()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif
    //              ☆*: .｡. o(≧▽≦)o .｡.:*☆
    //        	   coding karne ke liya skills nahi hai.. moye moye    
    

    inint(n);
    vector<string> ans;
    string path = "";
    vector<vector<bool>> visited(n,vector<bool>(n,false));
    visited[0][0] = true;
    vector<vector<int>> veci(n,vec(n));
    rep(i, n) {
    rep(j, n) {
        cin >> veci[i][j];
    }
}

    int i = 0,j = 0;
    SolveMaze(i,j,n,n,visited,ans,path,veci);
    if(ans.size() == 0){
        out("No Such Path Exist");
    }
    else{ 
        out("path exist -->");
        for(auto itr:ans){
            cout<<itr<<endl;
        }
    }
    cout<<endl;
}