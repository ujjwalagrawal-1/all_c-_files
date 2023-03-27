#include <iostream>
using namespace std;

/*
//                                                           Question 01
//Making the function here
void update(int arr[] , int size){
     arr[0] = 120;
    cout<<"printing the array"<<endl;
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"Main loop"<<endl;
}
int main() {z
    //Printing the Array
    int arr[3] = {1,2,3};
    update(arr,3);
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<"\t";
    }
}
*/
//                                                                   QUESTION 02
/*

void sumofarray(int array1[],int size){
    int sum = 0;

    for(int k = 0;k<size;k++){
        cin>>array1[k];
    }
    for(int i = 0;i<size;i++){
        sum = sum + array1[i];
    }
    cout<<"\n"<<"Sum Of the array is :--"<<sum<<endl;
}
int main() { 
    int marks[100] ,element;
    cin>>element;
    sumofarray(marks,element);
}
*/
//                                                                   QUESTION 03
void lsc(int array[],int size,int element){
    cout<<"Please Enter the Number of element in the array"<<endl;
    cin>>size;
    cout<<"Please Enter any"<<"\t"<<size<<"\t"<<"Number for the array"<<endl;
    for(int u = 0;u<size;u++){
            cin>>array[u];
        }
    cout<<"Please Enter Which element do u Want in the array"<<endl;
    cin>>element;
    int sum = 0;
    cout<<"The Element is found at"<<" ";
    for(int i = 0;i<size;i++){
        if(array[i] == element){
        sum = sum + 1;
        cout<<i+1<<"\t"<<"  ,  ";
        }
        
        }
        cout<<"position"<<endl;
        cout<<"The Number of that element found is :-     "<<sum<<endl;
    }
    int main() { 
        int j,k,l;
        int array1[100];
        lsc(array1,k,l);
    }
