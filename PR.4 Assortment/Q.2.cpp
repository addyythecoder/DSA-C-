#include <iostream>
using namespace std;

int main(){
	int rows, cols;
	
	cout << "Enter the array's row size: ";
	cin >> rows;
	
	cout << "Enter the array's column size: ";
	cin >> cols;
	
	int arr[rows][cols];
	
	cout << "Enter the elements of array" << endl;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			cin >> arr[i][j]; 
		}
	}
	
	int neg = 1;
	int maxElement = arr[0][0];
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < cols; j++){
			if (arr[i][j] > maxElement){
				maxElement = arr[i][j];
				neg = 0;
			}
		}
	}
	
	
	cout << "The largest element in the array is: " << maxElement << endl;
	
	if(neg==1) 
		cout << "All elements are same...." << endl;
}	
