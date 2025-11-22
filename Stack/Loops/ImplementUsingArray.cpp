#include<iostream>
using namespace std;

class Stack {
public:
    int capacity;
    int* arr;
    int top;

    Stack() {
        capacity = 10000;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value) {
        top++;
        arr[top] = value;
    }

    int pop() {
        int x = arr[top];
        top--;
        return x;
    }

    int Top() {
        return arr[top];
    }

    int getSize() {
        return top + 1;
    }
};

int main() {
    Stack s;
    s.push(12);

    cout << s.Top() << endl;
    cout << s.getSize() << endl;
    cout << s.pop();
}
