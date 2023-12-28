#include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<int> u{10,1,7,6,14,9};


    // Selection sort in array;
    /*
    int j = 0;
    while(j!=u.size()){
        for(int h = j+1;h<u.size();h++){
            if(u[j] >= u[h]){
                swap(u[j],u[h]); 
            }
        }
        j++;
    }
    for(int y =0;y<u.size();y++){
        cout<<u[y]<<"  ";
    }
    */
    
    
    // Bubble sort in array
    /*
    int t = u.size() - 1;
    for(int p = 1 ; p<u.size();p++){
    for(int o = 0;o<t;o++){
        if(u[o] > u[o+1]){
            swap(u[o],u[o+1]);
        }
    }
    t--;
    }
    for(int y =0;y<u.size();y++){
        cout<<u[y]<<"  ";
    }
    */


   //   Insertion sort 
   for(int round  = 1;round<u.size() - 1;round++){
    int value = u[round];
    int j = round - 1;
    for(;j>=0;j--){
        if(u[j]>value){
            u[j + 1] = u[j];
        }
        else{
            break;
        }
    }
    u[j+1] = value;
   }
 for(int y =0;y<u.size();y++){
        cout<<u[y]<<"  ";
    }
}