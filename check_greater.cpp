#include <iostream>
using namespace std;

// Write a program to find which number is greater.
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if(num1 == num2) {
        cout << "Both numbers are equal" << endl;
    }
     else {
        cout << num1 << " is less than " << num2 << endl;
    } 
    return 0;
}