#include <iostream>

template <typename T>
class Stack {
private:
    static const int MAX_SIZE = 100;
    T elements[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(T value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack Overflow!" << std::endl;
            return;
        }
        elements[++top] = value;
    }

    T pop() {
        if (top == -1) {
            std::cout << "Stack Underflow!" << std::endl;
            return T();
        }
        return elements[top--];
    }

    bool isEmpty() const {
        return (top == -1);
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    while (!intStack.isEmpty()) {
        int value = intStack.pop();
        std::cout << value << " ";
    }
    std::cout << std::endl;

    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    while (!stringStack.isEmpty()) {
        std::string value = stringStack.pop();
        std::cout << value << " ";
    }
    std::cout << std::endl;
    std::cout<<"NAME : UJJWAL AGRAWAL "<<std::endl<<"ROLL NO. : 22118107 ";
    return 0;
}