#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        for (int k = 0; k < (n - i); k++) {
            cout << ((k + 1) % 2) << " "; 
        }

        cout << endl;
    }

    return 0;
}

