// #include<iostream>
// using namespace std;
// class Vector2D{
//     int xdire;
//     int ydire;

//     public:
//     Vector2D({
//         this->xdir = 0;
//         this->ydir = 0;
//     }
//     Vector2D(int xdir,int ydir){
//         this->xdir = xdir;
//         this->ydir = ydir;
//     }
//     void operator+(Vector2D &obj){
//         Vector2D result;
//         result.xdir = xdir + obj.xdir;
//         result.ydir = ydir + obj.ydir;
//         return result;
//     }
//     void operator-(Vector2D &obj){
//         Vector2D result;
//         result.xdir = -(xdir + obj.xdir);
//         result.ydir = -(ydir + obj.ydir);
//         return result;
//     }
//     void getX(){
//         return xdir;
//     }
//     void getY(){
//         return ydir;
//     }
// };
// int main(){
//     Vector2D obj1(12,10);
//     Vector2D obj2(4,6);
// }

#include <iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>& vec){
int n = vec.size();
    for(int i = 0;i<n-1;i++){
        int min = i;
        for(int j = i+1;j<n;j++){
            if(vec[i]>vec[j]){
                min = j;
            }
        }
        swap(vec[i],vec[min]);
    }
    return;
}
void insertion_sort(vector<int>& vec){
    int n = vec.size();
    for(int i = 1;i<n;i++){
        int key = vec[i];
        int j = i-1;
        while(j>=0 && key<vec[j]){
            swap(vec[j],vec[i]);
            j--;
        }
    vec[j+1] = key;
    }
}
int main(){
    vector<int>arr{4,5,8,7,9};
    // selection_sort(arr);
    insertion_sort(arr);
    for(auto itr:arr){
        cout<<itr<<"  ";
    }
}