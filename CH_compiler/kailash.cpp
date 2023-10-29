#include<bits/stdc++.h>
using namespace std;

int x(int &t){
    return ++t;
}
int main(){
    int i=5;
    cout<<x(i)<<endl;
    cout<<x(i)<<endl;
        return 0;
}