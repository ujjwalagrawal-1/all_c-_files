#include <iostream>
using namespace std;
/*
int reverse(int array[],int size,int df[]){
    cin>>size;
    int j = (size - 1);
    for(int u = 0;u<size;u++){
            cin>>array[u];
        }
    for(int i = 0;i<(size /2);i++){
            df[0] = array[j - i];
            array[j - i] = array[i];
            array[i] = array[0];
    }
    for(int k = 0;k<size;k++){
            cout<<array[k]<<"  ";
        }
}
int main() {
    int array1[100],fuck[0],siz;
    reverse(array1,siz,fuck);
}
*/
void takearray(int array1[] ,int n){
    for(int i = 0;i<n;i++){
        cin>>array1[i];
    }
}
void reverse(int array1[],int n){
    int start = 0;
    int end  = n-1;
    while(start<=end){
        swap(array1[start],array1[end]);
        start++;
        end--;
    }
}
void printarray(int array1[] ,int n){
    for(int i = 0;i<n;i++){
        cout<<array1[i]<<"\t";
    }
    cout<<endl;
}
int main() {
    int n,j;
    cout<<"Length of the array1 and array2"<<endl; 
    cin>>n>>j;
    cout<<"Give input for array 1 "<<endl;
    int array[100];
        takearray(array , n);

    cout<<"Give input for array 2 "<<endl;
    int array2[100];
    takearray(array2 , j);

    
    reverse(array , n);
    reverse(array2 , j);

    printarray(array , n);
    printarray(array2 , j);

}