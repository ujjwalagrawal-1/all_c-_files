#include <iostream>
using namespace std;

class MyStack {
private:
    int* arr;
    int top;
    int size;

public:
    MyStack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // Member Functions in stack

    void push(int data) {
        if (size - top > 1) {
            top++;
            arr[top] = data;
        }
        else {
            cout << "Can't enter the number. No place left. Please increase the size of the stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        }
        else {
            top--;
        }
    }

    int gettop() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;  // Return a default value or throw an exception to indicate an error condition
        }
        else {
            return arr[top];
        }
    }

    int getsize() {
        return top+1;;
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    MyStack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);

    while (!s.isEmpty()) {
        cout << s.gettop() << "  ";
        s.pop();
    }
    cout << endl;
    cout<<s.getsize()<<endl;;
    return 0;
}
