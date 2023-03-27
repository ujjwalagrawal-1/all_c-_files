#include<iostream>
using namespace std;
int main() {
int T;
    cin>>T;
    for(int i = 1;i<=T;i++){
        int t,x,m,d,s,u;
        cin>>x>>m>>d;
        t = x + d;
        s = x * m;
        if(t<=m){
            cout<<t<<endl;
        }
        else if(t>m){
            cout<<s<<endl;
        }
    }
}
