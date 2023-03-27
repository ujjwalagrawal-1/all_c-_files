////////////////////////////////////////////////            New Programme                 ///////////////////////////////////////////

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main() {
  /*
    vector<int> ab;
    
 int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  for(int i = 0;i<3;i++){
    for(int j = 0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
   int t,p;
   cin>>t>>p;
   int arr[t][p];
   for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      cin>>arr[i][j];
    }
    }
    for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
    }
    int ans = 0;
    for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      ans += arr[i][j];
    }
    ab.push_back(ans);
     ans = 0;
    cout<<endl;
    }

    for(int i = 0;i<ab.size();i++){
        cout<<ab[i]<<" ";

    }
    
   }
   */
    ////////////////////////////////////////////////            New Programme                 ///////////////////////////////////////////
    
    /*
    int takethe2d(int arr[][3],int t,int p){
        for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      cin>>arr[i][j];
    }
    }
    for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    }
    int getmax(int arr[][3],int t,int p){
    
     int min = INT16_MIN;
    for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
        
      if(arr[i][j]>= min){
        min = arr[i][j];
      }
      
    }
    }
    cout<<min<<endl;
    } 
    int gettranspose(int arr[][3],int t,int p){
         for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
        if(i<=j){
            swap(arr[i][j],arr[j][i]);
        }
      }
    }
    }
  
int main(){
        //FINDING MAX AND MIN IN 2D ARRAY:
    int t,p;
   cin>>t>>p;
   int arr[3][3];
   //takethe2d(arr,t,p);
   /*
   getmax(arr,t,p);
   
  ///////////////////////////////////////// New Programming           //////////////////////////////////
   takethe2d(arr,t,p);
   gettranspose(arr,t,p);
 for(int i = 0;i<t;i++){
    for(int j = 0;j<p;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }  
   */
  bool ans = false;
  cout<<ans<<endl;
}
   