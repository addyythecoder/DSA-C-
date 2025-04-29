#include <iostream>
using namespace std;

//Linked List Classes 
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void addNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Node added successfully.\n";
    }

    void display() {
        if (head == nullptr) {
            cout << "Linked List is empty.\n";
            return;
        }
        cout << "Linked List: ";
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

//Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right)/2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

// ---------------- Quick Sort ----------------
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

//Binary Search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right)/2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

//Menu System
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    LinkedList list;
    int array[100], arraySize = 0;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add node to Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Enter array elements\n";
        cout << "4. Sort array using Merge Sort\n";
        cout << "5. Sort array using Quick Sort\n";
        cout << "6. Display array\n";
        cout << "7. Binary Search in array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int val;
                cout << "Enter value to add: ";
                cin >> val;
                list.addNode(val);
                break;
            }
            case 2:
                list.display();
                break;
            case 3: {
                cout << "Enter size of array: ";
                cin >> arraySize;
                cout << "Enter elements:\n";
                for (int i = 0; i < arraySize; i++) {
                    cout << "Element " << i+1 << ": ";
                    cin >> array[i];
                }
                break;
            }
            case 4:
                if (arraySize == 0) cout << "Array is empty.\n";
                else {
                    mergeSort(array, 0, arraySize - 1);
                    cout << "Array sorted using Merge Sort.\n";
                }
                break;
            case 5:
                if (arraySize == 0) cout << "Array is empty.\n";
                else {
                    quickSort(array, 0, arraySize - 1);
                    cout << "Array sorted using Quick Sort.\n";
                }
                break;
            case 6:
                displayArray(array, arraySize);
                break;
            case 7: {
                if (arraySize == 0) {
                    cout << "Array is empty.\n";
                } else {
                    int target;
                    cout << "Enter value to search: ";
                    cin >> target;
                    int result = binarySearch(array, arraySize, target);
                    if (result != -1)
                        cout << "Value found at index " << result << ".\n";
                    else
                        cout << "Value not found.\n";
                }
                break;
            }
            case 0:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}

