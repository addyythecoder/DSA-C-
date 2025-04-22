#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

 
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Node inserted.\n";
    }

   
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }

   
    void update(int oldVal, int newVal) {
        Node* temp = head;
        while (temp) {
            if (temp->data == oldVal) {
                temp->data = newVal;
                cout << "Node updated.\n";
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found.\n";
    }

    void remove(int value) {
        Node* temp = head;
        Node* prev = NULL;

        while (temp && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        if (!temp) {
            cout << "Value not found.\n";
            return;
        }

        if (!prev) {
            head = head->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
        cout << "Node deleted.\n";
    }
};

int main() {
    LinkedList list;
    int choice, val, newVal;

    do {
        cout << "\n--- Linked List CRUD Menu ---\n";
        cout << "1. Insert\n2. Display\n3. Update\n4. Delete\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            list.insert(val);
            break;
        case 2:
            list.display();
            break;
        case 3:
            cout << "Enter value to update: ";
            cin >> val;
            cout << "Enter new value: ";
            cin >> newVal;
            list.update(val, newVal);
            break;
        case 4:
            cout << "Enter value to delete: ";
            cin >> val;
            list.remove(val);
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);
    
    return 0;
}
