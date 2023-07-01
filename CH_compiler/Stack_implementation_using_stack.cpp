#include<iostream>
using namespace std;
class Stack{
    int* arr;
    int top;
    int size;
    public:
    Stack(int size){
        this->arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    void push(int data){
        if(size-top<=1){
            cout<<"nothing to push"<<endl;
        }
        else{ 
            top++;
            arr[top] = data;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Nothing to pop, ll is empty"<<endl;
        }
        else{
            top--;
        }
    }
    int gettop(){
        if(top == -1){
            cout<<"LL is Empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    
        while(!s.isEmpty()){
            cout<<s.gettop()<<" ";
            s.pop();
        }


}