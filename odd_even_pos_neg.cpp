#include <iostream>
using namespace std;

// Determine odd/even AND also tell whether the number is positive or negative.
int main() {
    int number;
    cout << "Enter a number:";
    cin >> number;
    if(number > 0) {
        cout << "The number is positive" << endl;
    } else {
        cout << "The number is negative" << endl;
    }

    if(number % 2 == 0) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
    return 0;
}