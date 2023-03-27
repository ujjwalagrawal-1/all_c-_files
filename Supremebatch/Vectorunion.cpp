/*
#include <iostream>
#include <vector>
using namespace std;
int intersect(vector<int>x,vector<int>y){
    for(int i = 0;i<x.size();i++){
        for(int j = 0;j<y.size();j++){
            if(x[i] == y[j]){
                y[j] = INT16_MIN;
            }
        }
    }
}
int uni(vector<int>l,vector<int>m){

vector<int> ans;
for(int i = 0;i<l.size();i++){
        ans.push_back(l[i]);
    }
    for(int j = 0;j<m.size();j++){
        if(m[j] != INT16_MIN){
        ans.push_back(m[j]);
    }
    }
    for(int k = 0;k<ans.size();k++){
        cout<<ans[k]<<"  ";
    }
}
int main (){
    int n,m;
    cin>>n>>m;

    vector <int> a(n);
    vector <int> b(m);
    for(int i = 0;i<a.size();i++){
        cin>>a[i];
    }
    for(int j = 0;j<b.size();j++){
        cin>>b[j];
    }
    intersect(a,b);
    uni(a,b);
}
*/
 ///////////////////////////////////                                 New Programme                                      //////////////////////////////////////
/*
#include <iostream>
#include <vector>
using namespace std;

int insertarr(vector<int>a){
    for(int i = 0;i<a.size();i++){
        cin>>a[i];
    }
}
int toto(vector<int>a,int element){
    for(int i = 0;i<a.size();i++){
        for(int j = i + 1;j<a.size();j++){
            if((a[i] + a[j]) == element){
                cout<<a[i]<<"  "<<a[j]<<endl;
            }
        }
    }
}
int main(){
    cout<<"please Enter the value of the array 1 and array 2 with one gaph"<<endl;
    int m,n;cin>>m>>n;
    vector<int>a(m);
    //vector<int>b(n);
    insertarr(a);
    //insertarr(b(n));
    toto(a,n);
}
*/
#include <iostream>
#include <vector>
using namespace std;
int insertarr(vector<int>a){
    for(int i = 0;i<a.size();i++){
        cin>>a[i];
    }
}
int sort(vector<int>a){
    
    int start = 0;
    int end = a.size()-1;
    int i = 0;
    while(start <= end){
        if(a[i] == 0){
            swap(a[i],a[start]);
            start++;i++;
        }
        else if(a[i] == 1){
            swap(a[i],a[end]);
            i++;end--;
        }
    }
    
}
int output(vector<int>a){
    for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0;i<a.size();i++){
        cin>>a[i];
    }
    int start = 0;
    int end = a.size()-1;
    int i = 0;
    while(start <= end){
        if(a[i] == 0){
            swap(a[i],a[start]);
            start++;i++;
        }
        else if(a[i] == 1){
            swap(a[i],a[end]);
            end--;
        }
    }
    /*for(int i = 0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    */
   // New Way of writting 
   for(auto val : a){
    cout<<val<<" "; 
   }
}