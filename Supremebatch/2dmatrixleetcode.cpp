#include <iostream>
#include <vector>
using namespace std;
int zeromaker (vector<vector<int>> matrix){
     vector<int> s;
     vector<int> p;
        
        int r = matrix.size();
        int c = matrix[0].size();
        int rowi,coli;
        int tzero = 0;
        for(int i = 0;i<=(r*c - 1);i++){
             rowi = i/c;
             coli = i%c;
            if(matrix[rowi][coli]== 0){
                tzero++;
                s.push_back(rowi);
                p.push_back(coli);
            }
        }
        /*
        for(int v = 0;v<tzero;v++){
            cout<<p[v]<<"  ";
        }
        */
       // cout<<endl;
        for(int e = 0;e<tzero;e++){
            for(int t = 0;t<c;t++){
                matrix[s[e]][t] = 0;
            }
        
             for(int q = 0;q<r;q++){
                matrix[q][p[e]] = 0;
            }
        }
        /*
        
        */
        for(int tt = 0;tt<r;tt++){
            for(int yy = 0;yy<c;yy++){
                cout<<matrix[tt][yy]<<"  ";
            }
            cout<<endl;
        }
}

int main(){
    vector<vector<int>> matrix{{0,1,2,0},{3,4,5,2},{1,3,5,2}};
    zeromaker(matrix);
    //printing(matrix);
}