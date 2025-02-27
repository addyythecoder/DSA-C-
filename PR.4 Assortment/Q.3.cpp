#include<iostream>
using namespace std;

main(){
	int a[50][50],i,j,rows,cols;
	
	cout<<"Enter the number of rows :- ";
	cin>>rows;
	cout<<"Enter the number of columns :- ";
	cin>>cols;
	
	for(i = 0;i < rows; i++){
			for(j = 0;j < cols; j++){
				cin >> a[j][i];
			}
		}
			
		cout<<"The transpose matrix of an array: "<<endl;
		for(i = 0;i < rows; i++){
			for(j = 0;j < cols; j++){
				cout << a[i][j]<<" ";
			}
			cout << endl;
		}

}
