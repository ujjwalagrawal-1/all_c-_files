#include<bits/stdc++.h>
using namespace std;

//Speed
#define bullet() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

class heap{
    public:
    int arr[101];
    int size;

    heap(int size){
        this->size = size;
    }
    void insert(int data){
        size = size+1;
        arr[size] = data;
        int index = size;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent] , arr[index]);
                index = parent;
            }
            else{
                break;
            }
        }
    }
};

void heapify(int arr[],int index,int n){
    int i = index;
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;

    if(left<n && arr[largest]<arr[left]){
        // swap(arr[largest],arr[left]);
        // heapify(arr,i,n);
        largest = left;
    }
    if(right<n && arr[largest]<arr[right]){
        // swap(arr[largest],arr[right]);
        // heapify(arr,i,n);
        largest = right;
    }
    if(largest != index){
        swap(arr[largest],arr[index]);
        index = largest;
        heapify(arr,index,n);
    }
}
void creare_heap(int arr[])
void heap_Sort(int arr[],int size){
    int n = size;
    while(n!=1){
        swap(arr[n],arr[1]);
        n--;
        heapify(arr,1,n);
    }
}
int main(){
    bullet();
// creat heap here heap(size); and declare elements
    heap h(5);
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;  
    cout << "Printing the heap" << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    h.insert(110);
    cout << endl;
    cout<< "Printing the heap"<<endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }

}