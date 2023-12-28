#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int k = n;
    
    for(int i=0;i<n;i++,k++){
        int c = 1;
        int x = i;
        for(int j =0;j<k;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if(j>=n-1-i && j<=n-1){
                cout<<c;
                c++;
                
            }
            
            else if(j>=n){
                
                cout<<x;
                x--;

            }
            
            
        }
        cout<<endl;
    }
}

