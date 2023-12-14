#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;
int tell(vector<int> a){
    int count;
    for(int i = 0;i<a.size();i++){
        if(array[i]%2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    cin>>T;
    int N,M;
    cin>>N>>M;
    string A,B;
    cin>>A>>B;
    int sum = N + M;
    string iot = A + B;
    sort(iot.begin(),iot.end());
    vector<int> map;
    int  i=0;
    int j = i+1;
    int count = 1;
    int e = 0;
    for(i = 0;i<sum;){
        if(iot[i] == iot[j]){
            count++;
            j++;
        }
        else{
            i = j;
            j++;
            count  = 1;
            e++;
        }
        map[e] = count;
    }
    
    if(sum%2 == 0 && tell(e)>0){
        cout<<"NO"<<endl;
    }
    else if(sum%2 != 0 && tell(e)>1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
