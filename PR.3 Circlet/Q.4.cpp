#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 5; i >= 1; i--) { 
        for (int j = 1; j < i; j++) {
            cout << "  "; 
        }
        
        for (int j = i; j <= 5; j++) {
            cout << j << " ";
        }

        for (int j = 4; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl; 
    }

    return 0;
}

