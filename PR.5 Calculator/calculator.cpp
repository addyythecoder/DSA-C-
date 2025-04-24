#include <iostream>
using namespace std;

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulos(int a, int b);

main(){
	int a,b,choice;
	while(1){
		cout << "Press 1 for + " << endl;
		cout << "Press 2 for - " << endl;
		cout << "Press 3 for * " << endl;
		cout << "Press 4 for / " << endl;
		cout << "Press 5 for % " << endl;
		cout << "Press 0 to exit the program" << endl;
		cin >> choice;
		
		if (choice == 0){
			cout << "Thank you for visiting us." << endl;
			break;
		}
		
		switch(choice){
			case 1:
				cout << "Enter number A: ";
				cin >> a;
				cout << "Enter number B: ";
				cin >> b;
				cout << "add: " << add(a,b) << endl;
				break;
				
			case 2:
				cout << "Enter number A: ";
				cin >> a;
				cout << "Enter number B: ";
				cin >> b;
				cout << "substract: " << substract(a,b) << endl;
				break;
				
			case 3:
				cout << "Enter number A: ";
				cin >> a;
				cout << "Enter number B: ";
				cin >> b;
				cout << "multiply: " << multiply(a,b) << endl;
				break;
				
			case 4:
				cout << "Enter number A: ";
				cin >> a;
				cout << "Enter number B: ";
				cin >> b;
				cout << "divide: " << divide(a,b) << endl;
				break;
				
			case 5:
				cout << "Enter number A: ";
				cin >> a;
				cout << "Enter number B: ";
				cin >> b;
				cout << "modulos: " << modulos(a,b) << endl;
				break;
			
			default:
				cout << "Not valid " << endl;		
		}
	}
}

int add(int a, int b){
	return a + b;
}
int substract(int a, int b){
	return a - b;
}
int multiply(int a, int b){
	return a * b;
}
int divide(int a, int b){
	return a / b;
}
int modulos(int a, int b){
	return a % b;
}

