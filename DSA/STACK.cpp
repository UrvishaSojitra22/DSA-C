#include<iostream>
using namespace std;

int stack[50];
int top = -1;

void push(int value) {
    top++;
    stack[top] = value;
    cout << " pushed to stack: " << value << endl;
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty! Cannot pop." << endl;
    } else {
        cout << " popped from stack: " << stack[top] << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty! No top element." << endl;
    } else {
        cout << "Top element is: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout <<  " "<<stack[i] <<endl;
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    do {
        cout << "Press 1 to push" << endl;
        cout << "Press 2 to pop" << endl;
        cout << "Press 3 to peek" << endl;
        cout << "Press 4 to display" << endl;
        cout << "Press 5 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Thank You...!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    
}

