#include <iostream>
#include <vector>

using namespace std;
int darr(vector<vector<int>>a,int r,int c){
    int max = INT16_MAX;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
           if( a[i][j] <= max){
            max = a[i][j];
           }
        }
    }
    return max;
}
int squareroot(int num){
    int s = 0;
    int e = num ;
    int mid = s + (e -s)/2;
    
    float ans = -1;
    while(s<=e){
        int mynum = mid*mid;
       if(mynum == num){
        ans =  mid;
       }
        if(num < mynum){
            e = mid -1 ;
        }
        else{
            s = mid + 1;
            ans = mid;
        }
        mid = s + (e -s)/2;
    }
    return ans;
}
int transpose(vector<vector <int>>a){
    int rows = a.size();
    int colo = a[0].size();
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<colo;j++){
            if(i<=j){
            swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i = 0;i<a.size();i++ ){
        for(int j = 0;j<a[0].size();j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main (){
    int number;cin>>number;
    cout<<squareroot(number);
    /*
float num ;
    cin>>num;
    int precision;
    cin >> precision;
    float rnum = squareroot(num);
    double step = 0.1;
    for(int i =0;i<precision;i++){
        for(float j = rnum;j*j<=num;j = j + step){
            rnum = j;
        }
        step = step/10;
    }
    cout<<rnum<<endl;
    
   vector<vector<int>>b {{1,2,3},{4,-8,6},{7,8,9}};
   int r = b.size();
   int c = b[0].size();
   //cout<<darr(b,r,c)<<endl;
   transpose(b);
   */
}