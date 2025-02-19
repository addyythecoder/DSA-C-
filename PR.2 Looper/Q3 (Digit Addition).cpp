#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit;

    cout << "Enter any number: ";
    cin >> num;

    lastDigit = num % 10;

    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    cout << "The sum of the first and last digit: " << sum << endl;

    return 0;
}

