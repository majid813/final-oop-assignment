#include <iostream>
using namespace std;

int main() {
    int value1;
    double value2;
    cout << "Enter an integer value for value1: ";
    cin >> value1;
    cout << "Enter a double value for value2: ";
    cin >> value2;

    try {
        if (value1 < 0 || value2 < 0) {
            throw "Error: Values cannot be negative.";
        }
        if (value2 == 0) {
            throw "Error: value2 cannot be equal to 0.";
        }
        int sum = value1 + value2;
        if (sum > 20) {
            throw "Sum of values cannot be greater than 20.";
        }
        int product = value1 * value2;
        if (product > 20) {
            throw "Product of values cannot be greater than 20.";
        }
        int remainder = value1 % (int)value2;
        cout << "Addition: " << sum << endl;
        cout << "Multiplication: " << product << endl;
        cout << "Remainder: " << remainder;
    }
    catch (...) {
        cerr << "Error: An unknown exception occurred." << endl;
    }
    return 0;
}
