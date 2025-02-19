#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    
    cout << "Enter any number: ";
    cin >> num;

    int no = num; 

    while (no > 0) {
        no = no / 10; 
        count++; 
    }

    cout << "Total number of digits: " << count << endl;

    return 0;
}

