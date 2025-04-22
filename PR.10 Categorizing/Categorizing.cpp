#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for(int j = i + 1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L = new int[n1];
    int* R = new int[n2];

    for(int i = 0; i < n1; i++) L[i] = arr[left + i];
    for(int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];

    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; ++i)
        if(arr[i] == key)
            return i;
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = left + (right - left)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}


void displayArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    const int SIZE = 100;
    int arr[SIZE], n, choice, key;

    while(true) {
        
        cout << "1. Selection Sort"<<endl;
        cout << "2. Merge Sort"<<endl;
        cout << "3. Linear Search"<<endl;
        cout << "4. Binary Search "<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 5) break;

        cout << "Enter how many numbers of element you want to sort or search: ";
        cin >> n;
        cout << "Enter " << n << " elements:"<<endl;
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        switch(choice) {
            case 1:
                selectionSort(arr, n);
                cout << "Array after Selection Sort: ";
                displayArray(arr, n);
                break;

            case 2:
                mergeSort(arr, 0, n - 1);
                cout << "Array after Merge Sort: ";
                displayArray(arr, n);
                break;

            case 3:
                cout << "Enter element to search: ";
                cin >> key;
                {
                    int index = linearSearch(arr, n, key);
                    if(index != -1)
                        cout << "Element found at index " << index << endl;
                    else
                        cout << "Element not found."<<endl;
                }
                break;

            case 4:
                mergeSort(arr, 0, n - 1); 
                cout << "Sorted array: ";
                displayArray(arr, n);
                cout << "Enter element to search: ";
                cin >> key;
                {
                    int index = binarySearch(arr, n, key);
                    if(index != -1)
                        cout << "Element found at index " << index << endl;
                    else
                        cout << "Element not found."<<endl;
                }
                break;

            default:
                cout << "Invalid choice. Try again."<<endl;
        }
    }

    return 0;
}
