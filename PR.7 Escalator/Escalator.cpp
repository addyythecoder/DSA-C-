#include <iostream>
using namespace std;

const int SIZE = 5;

class Stack {
private:
    int arr[SIZE];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int value) {
        if (topIndex == SIZE - 1) {
            cout << "Stack is full. Cannot push.\n";
            return;
        }
        arr[++topIndex] = value;
        cout << "Pushed " << value << " to the stack.\n";
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        cout << "Popped " << arr[topIndex--] << " from the stack.\n";
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty. No top element.\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == SIZE - 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = topIndex; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Top\n";
        cout << "4. Check if Empty\n";
        cout << "5. Check if Full\n";
        cout << "6. Display Stack\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                value = stack.top();
                if (!stack.isEmpty())
                    cout << "Top element is: " << value << endl;
                break;
            case 4:
                cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
                break;
            case 5:
                cout << (stack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
                break;
            case 6:
                stack.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}

