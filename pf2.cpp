// Problem 2:
// Write a program to check whether a given number has between 2 and 5 digits.
#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 9 && number < 99) {
        cout << number << " the number is two digit" << endl;
    }

    if(number > 99 && number < 999) {
        cout << number << " the number is three digit" << endl;
    }

    if(number > 999 && number < 9999) {
        cout << number << " the number is four digit" << endl;
    }

    if(number > 9999 && number < 99999) {
        cout << number << " the number is five digit" << endl;
    }

    return 0;
}