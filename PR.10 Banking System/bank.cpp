#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
public:
    int accid;
    char accname[50];
    float balance;

    void setDetails(int accid, char accname[50], float balance) {
        this->accid = accid;
        strcpy(this->accname, accname);
        this->balance = balance;
    }

    void getDetails() {
        cout << "Accid :- " << this->accid << endl;
        cout << "Accname :- " << this->accname << endl;
        cout << "Balance :- " << this->balance << endl;
    }

    float checkBalance() {
        return this->balance;
    }
    
    void depositeAmount(float amount){
    	this->balance = this->balance + amount;
    	cout<<"Amout successfully deposite"<<endl;
	}
};

int main() {
    BankAccount bank;
    int accid;
    char accholdername[50];
    float bal;

    int choice;
    while (1) {
        cout << "\n-----------------------------\n";
        cout << "Press 1: Create Account\n";
        cout << "Press 2: Show Account Details\n";
        cout << "Press 3: Check Balance\n";
        cout << "Press 4: Deposit Balance (Not Implemented Yet)\n";
        cout << "Press 5: Withdraw Balance (Not Implemented Yet)\n";
        cout << "Press 6: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Thank you for visiting!" << endl;
            break;
        }

        switch (choice) {
        case 1:
            cout << "Enter account ID: ";
            cin >> accid;
            cout << "Enter account holder name: ";
            cin >> accholdername;
            cout << "Enter initial balance: ";
            cin >> bal;
            bank.setDetails(accid, accholdername, bal);
            cout << "Your account was successfully created.\n";
            break;

        case 2:
            bank.getDetails();
            break;

        case 3:
            cout << "Current balance: " << bank.checkBalance() << endl;
            break;
            
        case 4:
        	cout<<"Enter Deposite amount :- ";
        	cin>>amt;
        	bank.depositeAmount(amt);
        break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

