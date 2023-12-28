#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  // Zig zag Question
        int numRows = 3;
        int index = 0;
        string s = "PAYPALISHIRING";
        vector<vector <char>> ans;
        int i = 0;
        int j = 0;
        while(index < s.length()){
            if(j == 0){
               ans[i++][j] = s[index++]; 
            }
            else if(i>numRows){
                i = numRows-1;
                j++;
            }
            else if(i<0){
                i = 1;
                j++;
            }
            else if(j>0 && i == numRows - 1){
                while(i>=0){
                    ans[i--][j] = s[index++];
                }
            }
            else if(j>0 && i == 1){
                while(i<=numRows){
                    ans[i++][j] = s[index++];
                }
            }
            else{
                continue;
            }
        }
        for(int l = 0;l<numRows;l++){
          for(int m = 0;m<=j;m++){
            cout<<ans[l][m];
          }
          cout<<endl;
        }
}