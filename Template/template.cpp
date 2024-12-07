#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    // Constructor to initialize the stack with a given size
    Stack(int size) {
        arr = new T[size];
        capacity = size;
        top = -1;
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Function to add an element to the stack
    void push(T value) {
        if (top == capacity - 1) {
            throw overflow_error("Stack Overflow: Cannot push element, stack is full.");
        }
        arr[++top] = value;
    }

    // Function to remove the top element from the stack
    T pop() {
        if (top == -1) {
            throw underflow_error("Stack Underflow: Cannot pop element, stack is empty.");
        }
        return arr[top--];
    }

    // Function to check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Function to check if the stack is full
    bool isFull() const {
        return top == capacity - 1;
    }

    // Function to return the top element of the stack without removing it
    T peek() const {
        if (top == -1) {
            throw underflow_error("Stack is empty: Cannot peek.");
        }
        return arr[top];
    }

    // Function to get the current size of the stack
    int size() const {
        return top + 1;
    }
};

int main() {
    int stackSize;
    cout << "Enter the size of the stack: ";
    cin >> stackSize;

    Stack<int> stack(stackSize);

    // Demonstrate push and pop operations
    try {
        stack.push(10);
        stack.push(20);
        stack.push(30);

        cout << "Top element is: " << stack.peek() << endl;
        cout << "Stack size is: " << stack.size() << endl;

        cout << "Popped element: " << stack.pop() << endl;
        cout << "Popped element: " << stack.pop() << endl;

        cout << "Stack size after popping: " << stack.size() << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
