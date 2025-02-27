#include <iostream>
using namespace std;

int main(){
	int size;
	
	cout << "Enter the array's size: ";
	cin >> size;
	
	int arr[size];
	
	cout << "Enter the elements of array: " << endl;
	for (int i = 0; i < size; i++){
		cout << "a[" << i << "] ";
		cin >> arr[i];
	}
	
	int neg=1;
	cout << "The negative elements from the array: " << endl;
	for (int i = 0; i < size; i++){
		if(arr[i] < 0){
			cout << arr[i] << " "; 	
			neg = 0;
		} 
	}
	
	if(neg==1) 
		cout << "There are no negative elements in the array...." << endl;
	
}	
