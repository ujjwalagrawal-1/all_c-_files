#include <iostream>
#include <vector>
using namespace std;
int findunique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}
int findintersection(vector<int>a,vector<int>b){
    vector<int>c;
    for(int i = 0;i<a.size();i++){
        for(int j = 0;j<b.size();j++){
            if(a[i] == b[j]){

            c.push_back(b[j]);
            b[j] = -1;
            }
        }
    }
    for(int k = 0;k<c.size();k++){
        cout<<c[k]<<" ";
    }
}
int main(){
    /*
    int n;
    cout<<"Enter the length of the vevtor"<<endl;
    cin>>n;
    vector<int>brr (n);
    cout<<"Taking input for the array"<<endl;
    for(int i=0;i<brr.size();i++){
        cin>>brr[i];
    }
    cout<<"Find the unique element of the Vector"<<endl;
    int uniqueelement = findunique(brr);
    cout<<uniqueelement<<endl;
    */
   int sa,sb;
   cin>>sa>>sb;
   vector<int> f(sa);
   cout<<"Taking input for the array"<<endl;
    for(int i=0;i<f.size();i++){
        cin>>f[i];
    }
   vector<int> g(sb);
   cout<<"Taking input for the array"<<endl;
    for(int i=0;i<g.size();i++){
        cin>>g[i];
    }
    findintersection(f,g);  
}