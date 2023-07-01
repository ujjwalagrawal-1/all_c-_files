#include <iostream>
#include <stack>
using namespace std;

class MyStack {
public:
    int* arr;
    int top1;
    int top2;
    int size;

    MyStack(int size) {
        arr = new int[size];
        top1 = -1;
        top2 = size;
        this->size = size;
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack is going to end" << endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    }
   void pop1() {
        if (top1 == -1) {
            cout << "Nothing to delete" << endl;
        }
        else {
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Stack overflow" << endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    }

 

    void pop2() {
        if (top2 == size) {
            cout << "Nothing to delete" << endl;
        }
        else {
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        cout<<endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] <<"  ";
        }
    }
};

int main() {
    MyStack s(6);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(40);
    s.push2(50);
    s.push2(60);
    s.print();
}
