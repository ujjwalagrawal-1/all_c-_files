#include <iostream>
#include <vector>
using namespace std;
int wave(vector<vector<int>> b){
    int r  = b.size();
    int c = b[0].size();
    for(int startcol = 0;startcol<c;startcol++){
        if(startcol % 2 == 0){
            for(int row = 0 ;row<b.size();row++){
                cout<<b[row][startcol]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int rew = r-1;rew>=0;rew--){
                cout<<b[rew][startcol]<<" ";
            }
            cout<<endl;
        }
    }

    }
    int spiralprint(vector<vector <int>>a){
        int r = a.size();
        int c = a[0].size();
        for(int i = 0 ; i<) 
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

int main () {
vector<vector<int>>a{{4,5,6},{7,2,6},{4,8,9}};
wave(a);
}