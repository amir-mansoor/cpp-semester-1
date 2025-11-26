// Problem 1:
// Write a program that takes three values as the sides of a triangle and checks whether the triangle is equilateral or not.
#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: " << endl;
    cout << "Enter first side: ";
    cin >> side1;
    cout << "Enter second side: ";
    cin >> side2;
    cout << "Enter third side: ";
    cin >> side3;
    

    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else {
        cout << "The triangle is not equilateral." << endl;
    }

    return 0;
}