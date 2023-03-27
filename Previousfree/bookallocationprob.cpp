#include <iostream>
using namespace std; 
int main()  { 
    int x;
        cin>>x;
        int v[7] ={1,2,8,10,11,12,19};
        int n;
        cin>>n;
        int s=0;
        int e = n -1;
        int mid = s + (e -s)/2;
        int ans = -1;
        while(s<=e){
            if(v[mid] == x){
                ans = mid;
            }
            if(x<v[mid]){
                e = mid -1;
                
            }
            else{
                s = mid + 1;
                ans = mid;
        }
        mid = s + (e -s)/2;
    }
    cout<<ans<<endl;
}
