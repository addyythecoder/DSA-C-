#include <iostream>
using namespace std;

int main() {
    char ch = 'a';
    
    do {
        cout << ch; 
        ch = ch + 4; 
        if (ch <= 'z') {
            cout << ", "; 
        }
    } while (ch <= 'z');

    return 0;
}

