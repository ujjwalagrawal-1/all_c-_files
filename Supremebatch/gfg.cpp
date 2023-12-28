#include <iostream>
#include <vector>
using namespace std;
int main (){
    /*
vector<int> b{1,1,1,0,0,0};
int l = 0;
int m = 0;
int h = b.size()- 1;
while(m <= h){
    if(b[m] == 0){
        swap(b[m],b[l]);
        m++;
        l++;
    }
    else if(b[m] == 1){
        swap(b[h],b[m]);
        h--;
    }
}
for(int i = 0 ; i<b.size();i++){
    cout<<b[i]<<" ";
}
*/
vector<int> a{0,1,2,0,1,2,0,2,1,0};
int l = 0;
int h = a.size() -1;
int m = 0;
while(m<a.size()){
    if(a[m] == 0){
        swap(a[m],a[l]);
        l++;
        m++;
    }
    else if(a[m] == 1){
        m++;
    }
    else if(a[m] == 2){
        swap(a[m],a[h]);
        h--;

    }
}
for(int i = 0;i<a.size();i++){
    cout<<a[i]<<"  ";
}

}