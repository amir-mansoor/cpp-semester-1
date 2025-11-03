#include <iostream>
using namespace std;

// check if number is grater than 0;
// int main() {
//     int number = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     if(number > 0) {
//         cout << "Number is positive" << endl;
//     }
//     return 0;
// }

// int main() {
//     int number = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     if(number < 0) {
//         cout << number << " is negative" << endl;
//     }
//     return 0;
// }

// int main() {
//     int number = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     if(number % 2 == 0) {
//         cout << number << " is even" << endl;
//     }

//     return 0;
// }


// int main() {
//     int number = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     if(number > 0) {
//         cout << number << " is positive" << endl;
//     }

//     if(number == 0) {
//         cout << "Number is 0" << endl;
//     }
//     return 0;
// }


// int main() {
//     int number = 0;
//     cout << "Enter number: ";
//     cin >> number;
//     if(number > 0) {
//         cout << number << " is positive" << endl;
//     }

//     if(number % 2 == 0) {
//         cout << number << " is even" << endl;
//     }

//     if(number % 2 != 0) {
//         cout << number << " is odd" << endl;
//     }
//     return 0;
// }

// int main() {
//     int number = 0;
//     cout << "Enter number: ";
//     cin >> number;
//     if(number > 9 && number < 99) {
//         cout << number << " Number is two digit" << endl;
//     }

//     if(number > 99 && number < 999) {
//         cout << number << " Number is three digit" << endl;
//     }

//     if(number > 999 && number < 9999) {
//         cout << number << " Number is four digit" << endl;
//         return 0;

//     }

//     if(number > 9999 & number < 99999) {
//         cout << number << " Number is five digit" << endl;
//         return 0;
//     }
//     return 0;
// }

// int main() {
//     int first_angle = 0, second_angle = 0, third_angle = 0;
//     cout << "Enter first angle: ";
//     cin >> first_angle;
//     cout << "Enter second angle: ";
//     cin >> second_angle;
//     cout << "Enter third angle: ";
//     cin >> third_angle;
//     if(first_angle + second_angle + third_angle == 180) {
//         cout << "Triangle is valid" << endl;
//     } else {
//         cout << "Not valid inputs for triangle" << endl;
//     }
//     return 0;
// }

int main() {
    int first_side = 0, second_side = 0, third_side = 0;
    cout << "Enter first angle: ";
    cin >> first_side;
    cout << "Enter second angle: ";
    cin >> second_side;
    cout << "Enter third angle: ";
    cin >> third_side;
    if(first_side == second_side && second_side == third_side) {
        cout << "it is a triangle" << endl;
    } else {
        cout << "not a triangle" << endl;
    }
    return 0;
}