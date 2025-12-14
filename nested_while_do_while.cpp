#include <iostream>
using namespace std;

// int main() {
//     int number = 0;
//     int counter = 0;
//     int divisor = 0;
//     int temp = 0;
//     int digit = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     temp = number;

//     while(temp != 0) {
//         digit = temp % 10;
//         while(digit > divisor && digit % divisor != 0) {
//             divisor += 1;

//         }

//         if(digit == divisor) {
//             counter += 1;
//         }

//         temp /= 10;

//     }

//     cout << "Total single digit prime numbers are " << counter << endl;
//     return 0;
// }

// int main() {
//     int number = 0;
//     int counter = 0;
//     int temp = 0;
//     int digit = 0;
//     int divisor = 2;
//     int reminder = 0;

//     cout << "Enter a number: ";
//     cin >> number;
//     temp = number;

//     while(temp != 0) {
//         digit = temp % 10;

//         if(digit == 2 || digit == 3 || digit == 5 || digit == 7) {
//             cout << digit << " is prime " << endl;
//         }
//         while(temp > divisor && reminder % divisor != 0) {
//             divisor += 1;

//         }

//         if(temp == divisor) {
//             cout << temp << " is prime" << endl;
//         }

//         temp /= 10;

//     }
//     return 0;
// }


// Example: Repetition of menu based calculator
// int main() {
//     int choice = 0;
//     string option = "";
//     do {
//         double firstNumber = 0.0;
//         double secondNumber = 0.0;
//         cout << "Enter first number: ";
//         cin >> firstNumber;
//         cout << "Enter second number: ";
//         cin >> secondNumber;
//         cout << "1. Sum" << endl;
//         cout << "2. Subtraction" << endl;
//         cout << "3. Multiplication" << endl;
//         cout << "4. Division" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch(choice) {
//             case 1:
//                 cout << "Sum " << firstNumber + secondNumber << endl;
//                 break;
//             case 2:
//                 cout << "Subtraction " << firstNumber - secondNumber << endl;
//                 break;
//             case 3:
//                 cout << "Product " << firstNumber * secondNumber << endl;
//                 break;
//             case 4:
//                 cout << "Division " << firstNumber / secondNumber << endl;
//                 break;
//             default:
//                 cout << "invalid choice" << endl;
//         }
//         cout << "Do you want to quit? (Yes/No): ";
//         cin >> option;
//     } while(option != "yes");
//     return 0;
// }