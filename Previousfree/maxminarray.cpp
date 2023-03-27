/*#include <iostream>
using namespace std;
int getmin(int array1[],int size){
    int min = INT16_MIN;
    for(int i = 0;i<size;i++){
    if(array1[i]>min){
        min = array1[i];
    }
    }
    cout<<min;
}
    int getmax(int array1[],int size){
    int max = INT16_MAX;
    for(int i = 0;i<size;i++){
    if(array1[i]<max){
        max = array1[i];
    
    }
    cout<<max;
}}
int main(){
    cout<<"Making programm for Maximum an Mininmum"<<endl;
    int b;
    cin>>b;
    int a[100];
    
for(int v = 0;v<b;v++){
    cin>> a[v];
}
cout<<"Maximum Value of the Function Of the Array is" <<getmax(a,b)<<endl;
}
*/

// code help solution
#include <iostream>
using namespace std;
int maximum(int num[] , int term){
    int mini = INT16_MIN;
    for (int i = 0; i < term; i++)
    {
        if(num[i]>mini){
            mini = num[i];
        }
    }
    return mini;
}
    int minimum(int num[] , int n){
    int maxi = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
               if(num[i]<maxi){
            maxi = num[i];
        } 
    }
    return maxi;
}
int main() {
    int n;
    cin>>n;
    int g[100];
    for(int j = 0;j<n ;j++){
        cin>>g[j];
    }
    cout<<"Maximim number in the array is "<<"\t"<<maximum(g,n);
    cout<<"Minimum number in the array is "<<"\t"<<minimum(g,n);
}