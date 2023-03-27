#include <iostream>
using namespace std;
/*//Making Array function
void arrayprinter(int array1[],int size){
    cout<<"Printing the array"<<endl;
    for(int i = 0;i<size;i++ ){
        cout<<array1[i]<<"\t";
    }

}
//void arraylength(int array[]){
  //  int length = sizeof(array)/sizeof(int);
    //cout<<length<<endl;
//}
int main() { 
    int first [] = {1,2,3};
    //Initializing the Array
    arrayprinter(first,3);
}*/
// New Programm -: Length of the array
/*
int main () { 
int array1 [9] = {1,2,3,4,5,6,7,8,9};
int a = sizeof(array1)/sizeof(int);
cout<<a<<endl;
}
*/
int main() { 
    char array2 [5] = {'a','b','c','d','e'};
    int size;
    cin>>size;
    for(int i = 0;i<size;i++){
        cout<<array2[i]<<"\t";
    }
}

