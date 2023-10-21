#include <iostream>
using namespace std;

const int size = 20;

class stack {
    int arr[size];
    int top;

public:
    stack() {
        top = -1;
    }

    bool isfull() {
        return top == size - 1;
    }

    bool isempty() {
        return top == -1;
    }

    void pop() {
        if (isempty()) {
            cout << "The stack is empty and cannot pop element" << endl;
        } else {
            top--;
        }
    }

    void push(int val) {
        if (isfull()) {
            cout << "Stack is full and cannot add elements" << endl;
        } else {
            top++;
            arr[top] = val;
        }
    }

    void peek() {
        if (isempty()) {
            cout << "No top value, stack is empty" << endl;
        } else {
            cout << arr[top] << endl;
        }
    }

    void display() {
        if (isempty()) {
            cout << "Stack is empty, first push elements" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
        }
    cout<<endl;
	}
};

int main() {
    int n;
    stack s;
    do {
        cout << "Enter 1 to push, 2 to pop, 3 to display the last element, or 4 to display all elements in the stack, or 0 to exit: ";
        cin >> n;
        switch (n) {
            case 1:
                int m;
                cout << "Enter the element to push: ";
                cin >> m;
                s.push(m);
                break;

            case 2:
                s.pop();
                cout<<"The top element is poped: "<<endl;
                break;

            case 3:
            	cout<<"The top element is: "<<endl;
                s.peek();
                break;

            case 4:
            	cout<<"Elements in stack: "<<endl;
                s.display();
                break;

            default:
                break;
        }
    } while (n != 0);

    return 0;
}


