//"2023-11-15 01:09:06",
// Author Ujjwal_Agrawal
// Linkedin:  https://www.linkedin.com/in/ujjwal-agrawal-9267b1253/
// Codeforces: https://codeforces.com/profile/unerring_coder
// Codechef: https://www.codechef.com/users/kumarujjwalagr

#include <bits/stdc++.h>
using namespace std;

//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//Macros
#define IOtext freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define Pai (3.141592653589)
#define M 1000000007
#define in(x) insert(x);
#define pb push_back
#define pp pop_back
#define f first
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
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define cm cout<<"-1"<<endl
#define ps(x,y) fixed<<setprecision(y)<<x

//Typedef
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vec;
typedef vector<char> vec_ch;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef vector<vector<int>> dvec;
typedef vector<pair<int,int>> vec_pair;
typedef vector<pair<int,pair<int,bool>>> vec_db_pr;
typedef map<int,int> mp;
typedef queue<int> q;
typedef queue<pair<int,int>> doq;
typedef vector<char> vch;
typedef set<char> sc;
typedef set<int> si;
typedef set<ll> sl;
typedef set<string> ss;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" ";_print(x); cerr<<endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

// Operator overloads
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
template<typename T, typename V> // cout << map<T,T>
ostream& operator<<(ostream &ostream, const map<T,V> &c) { for (auto &it : c) cout << it.first << " " << it.second<<endl; return ostream; }

//Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

//Bits
string decToBinary(int n){string s="";int i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}
ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}

//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}

//Constants
vector <ll> primes;
vector <bool> is_prime;

// Mathematical functions
void Sieve(int n){ is_prime.assign(n + 1, true); is_prime[0] = is_prime[1] = false; for(ll i = 2; i * i <= n; i++) if(is_prime[i]) for(ll j = i * i; j <= n; j += i) is_prime[j] = false;}
void get_primes(int n){ for(int i = 2; i <= n; i++)  if(is_prime[i])  primes.push_back(i); }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);} //__gcd 
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
ll modinv(ll p,ll q){ll ex;ex=M-2;while (ex) {if (ex & 1) {p = (p * q) % M;}q = (q * q) % M;ex>>= 1;}return p;}

void Merge_Sortedly(int arr[],int s,int e){
    
    int mid = s + (e - s)/2;
    int len1 = mid + 1 - s;
    int len2 = e - mid;
    int* left = new int[len1];
    int* right = new int[len2];
    int k = s;
    for(int i = 0;i<len1;i++){
      left[i] = arr[k++];
    }
    k = mid+1;
    for(int j = 0;j<len2;j++){
        right[j] = arr[k++];
    }

    int leftindex = 0;
    int rightindex = 0;
    int mainindex = s;

    while(leftindex<len1 && rightindex<len2){
        if(left[leftindex]<right[rightindex]){
            arr[mainindex++] = left[leftindex++];
        }
        else{
            arr[mainindex++] = right[rightindex++];
        }
    }
    while(leftindex<len1){
        arr[mainindex++] = left[leftindex++];
    }
    while(rightindex<len2){
        arr[mainindex++] = right[rightindex++];
    }
}
void MergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = s + (e - s)/2;
    MergeSort(arr,s,mid-1);
    MergeSort(arr,mid,e);
    Merge_Sortedly(arr,s,e);
}



void solve()
{
    // Implementing The Merge Sort 
    inint(x);
    int arr[x];
    // cin>>veci;
    // cout<<"Without Sorted Array is "<<endl;
    // cout<<veci;
    rep(i,x){
        cin>>arr[i];
    }
    int start = 0;
    int end = x-1;
    MergeSort(arr,start,end);
    for(int i = 0; i<x;i++)
        cout<<arr[i]<<" ";
}


int32_t main()
{
    bullet()
    #ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif
    //God knows when to help you So Keep Giving up your effort bcoz 
    //when effort and help combine then such erra will come in Which you can't Imagine
    //              ☆*: .｡. o(≧▽≦)o .｡.:*☆
    int t = 1;
    while(t--)
    {
    solve();
    }
    return 0;
}