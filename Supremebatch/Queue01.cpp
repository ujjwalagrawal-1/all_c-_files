#include<iostream>
using namespace std; 
class cirqueue{
    private:
    int* arr;
    int front;
    int rear;
    int size;
    public:
    cirqueu(int size){
        this->size = size;
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }
    void push(int data){
        if(front == -1){
            front = rear = 0;
            arr[front] = data;
        }
        else if(front == 0 && rear = size -1){
            cout<<"Q is full"<<endl;
        }
        else if(rear = size - 1){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        if(front == -1){
            cout<<"Nothing to pop"<<endl;
        }
        else if(front ==rear){
            arr[rear] = -1;
        }
    }
}
int main(){
    
}