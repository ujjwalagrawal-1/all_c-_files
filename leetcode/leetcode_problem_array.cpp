#include <iostream>
using namespace std;
/*
 // Question on Swap alternate a series .
 void input(int array[] , int n){
    for(int i = 0 ; i<n;i++){
        cin>>array[i];
    }
 }
 void swaparray(int array[],int n){
    for(int i =0;i<n;i+=2){
        if(i+1<n){
            swap(array[i],array[i+1]);
        }
    }
 }
void output(int array[] ,int n){
    for(int i = 0;i<n;i++){
        cout<<array[i]<<"\t";
    }
}


int main() {
   // cout<<"Hi I am Ujjwal"<<endl;
   int j;
   cout<<"Please Enter the size of the array"<<endl;
   cin>>j;
   int array1[100];
   cout<<"Please Enter the array"<<endl;
   input(array1,j);
   swaparray(array1,j);
   output(array1,j);
}
*/
                                                          // Unique Number of Occurrences(Leet code)
/*
void input(int arr[] , int n = arr.size){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}
void process(int arr[], int n = arr.size){
    int n = 0;
    int array[1000];
    for(int i = 0;i<n , ;i++ ){
        for(int j = i+1; j<n ;j++){
        if(arr[i] == arr[j]){
            n++;
          '  
        }
        else{
            break;
        }
        }
        cout<<"Element" <<arr[i]<<"Occurs    "<<n<<"Times";
    }
}
*/
                                                          // duplicATE  (Leet code)
                                                          /*
void input(int array[], int size){
    
    for(int a = 0;a<size;a++){
        cin>>array[a];
    }
}
void process(int array[], int size){
    for(int a = 0;a<size;a++){
        for(int b = a + 1;b<size;b++){
        if(array[a] == array[b]){
            cout<<array[a];
        
        }
    }
}
}
int main() {
    cout<<"Please enter the Number of test cases "<<endl; 
    int t;
    cin>>t;
    int size;
    for(int i =0;i<t;i++){
        int array1[100];
        cout<<"Please Enter Array size"<<endl;
        cin>>size;
        input(array1,size);
        process(array1,size);
}
}

void input(int array[], int size){
    
    for(int a = 0;a<size;a++){
        cin>>array[a];
    }
}
*/
 //New question
 /*
 void input(int array[], int size){
    
    for(int a = 0;a<size;a++){
        cin>>array[a];
    }
}
int main() {
    int s,v,arr1[100],arr2 [100];
    cin>>s;
    cin>>v;
    input(arr1,s);
    input(arr2,v);
    {
    for(int i = 0;i<s;i++){
       for(int j = 0;j<v;j++){
           if(arr1[i] == arr2[j]){
               cout<<arr1[i]<<" ";
               arr2[j] = -1;
               break;
        
           }
       }
    }
}
}
*/
/*
void input(int array[], int size){
    
    for(int a = 0;a<size;a++){
        cin>>array[a];
    }
}
int main() {
    int i = 0,j = 0,arr1[100] ,arr2[100],m ,n  ;
    cin>>n;cin>>m;
    input(arr1 ,n);
    input(arr2 ,m);
    while (i<n,j<m){
        if( arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
    }
    
}
*/
                                         // New Programm
void input(int array[], int size){
    
    for(int a = 0;a<size;a++){
        cin>>array[a];
    } 
}
int main() {
    int array[100];
    int s;
    int sum;
    cin>>sum;
    cin>>s;
    input(array,s);
    sort(array.begin(),array.end());    
    for(int i = 0;i<s;i++){
        for(int j = i + 1;j<s;j++){
            if(array[i] + array[j] == sum ){
                cout<<array[i]<<"   "<<array[j]<<endl;
            }
        }
    }
}