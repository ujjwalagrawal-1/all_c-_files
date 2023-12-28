#include <iostream>
#include <vector>
using namespace std;
int maximum(vector<int> a){
    int maxi = INT16_MIN;
    for(int i = 0;i<a.size();i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}

int main() {
    int T;
    
    cout<<" Enter the Number of testcases"<<endl;
    cin>>T;
    int count;
    vector<int>answer;
	for(int i = 0;i<T;i++){
        cout<<"Number of SUBtestcases AND MAX PAISA"<<endl;
	    int N,P;cin>>N>>P;
	    for(int j = 0;j<N;j++){
            count = 0;
	        int w,h,pa;
	        cin>>w>>h>>pa;
	        int ans = w*h;
            //cout<<ans<<endl;
	        if(pa<=P){
	            answer.push_back(ans);
	        }
            else{
                cout<<"yes"<<endl;
                count++;
            }
	        
	    }
        if(count == N){
            cout<<"no tablet"<<endl;
        }
        else{
        cout<<maximum(answer)<<endl;
        }
	}
}

