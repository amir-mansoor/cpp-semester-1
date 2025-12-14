#include <iostream>
using namespace std;

// int main() {
//     string eaten = "no";
//     string temp = "yes";
//     while(eaten != "yes") {
//         cout << "I am waiting" << endl;
//         cout << "Have you eaten" << endl;
//         cin >> temp;
//         eaten = temp;
//     }

//     cout << "I am not waiting anymore" << endl;
//     return 0;
// }

// int main() {
//     int total;
//     int amount;
//     while(total <= 1000) {
//         cout << "Enter the price of item: ";
//         cin >> amount;
//         total += amount;
//     }

//     cout << "You can't shop anymore" << endl;
//     return 0;
// }

// int main() {
//     int number = 0;
//     int temp  = 10;
//     while (number != temp) {
//         cout << "Enter a number: ";
//         cin >> number;
//         number != temp;
//     }

//     cout << "You have guessed the number" << endl;
//     return 0;
// }

// Count number of digits in a decimal number.
// int main() {
//     int number = 0;
//     int counter = 0;
//     int temp = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     while(number != 0) {
//         number /= 10;
//         counter += 1;

//     }

//     cout << "Total number of digits are: " << counter << endl;
//     return 0;
// }

// Reverse a Number.

// int main() {
//     int number = 0;
//     int reverse = 0;
//     int temp = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     while(number != 0) {

//         reverse = number % 10 + reverse * 10;
//         number /= 10;
//     }



//     cout << "The reverse is: " << reverse << endl;
//     return 0;
// }

// Check whether the number is Palindrome or not

// int main() {
//     int num, original, reversed = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     original = num;   // store the original number

//     while (num > 0) {
//         int digit = num % 10;       // get last digit
//         reversed = reversed * 10 + digit;  // build reversed number
//         num /= 10;                  // remove last digit
//     }

//     if (original == reversed)
//         cout << original << " is a Palindrome number." << endl;
//     else
//         cout << original << " is NOT a Palindrome number." << endl;

//     return 0;
// }

// Check whether a given number is Prime or not.
// int main() {
//     int number = 0;
//     int divisor = 2;
//     int temp = 0;
//     cout << "Enter a number: ";
//     cin >> number;
//     while(number > divisor && number % divisor != 0) {
//         divisor += 1;
//     }

//     if(number > divisor) {
//         cout << "Number is not prime" << endl;
//     } else {
//         cout << number << " is prime" << endl;
//     }

//     return 0;
// }

// Converting decimal number to binary.


// int main() {
//     int decimal, number;
//     string binary = "";

//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     number = decimal;

//     if (number == 0) {
//         binary = "0";
//     }

//     while (number > 0) {
//         binary = char('0' + number % 2) + binary; 
//         number /= 2;
//     }

//     cout << "The binary of " << decimal << " is: " << binary << endl;

//     return 0;
// }

// Converting decimal number to octal.
// int main() {
//     int decimal, number;
//     string octal = "";

//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     number = decimal;

//     if (number == 0) {
//         octal = "0";
//     }

//     while (number > 0) {
//         int remainder = number % 8;       // get remainder for octal digit
//         octal = char('0' + remainder) + octal;  // prepend digit
//         number /= 8;                      // reduce number
//     }

//     cout << "The octal of " << decimal << " is: " << octal << endl;

//     return 0;
// }

// 
// int main() {
//     int decimal, number, base;
//     string result = "";

//     cout << "Enter a decimal number: ";
//     cin >> decimal;

//     cout << "Enter the base (2-9): ";
//     cin >> base;

//     if (base < 2 || base > 9) {
//         cout << "Invalid base! Must be between 2 and 9." << endl;
//         return 1;
//     }

//     number = decimal;

//     if (number == 0) {
//         result = "0";
//     }

//     while (number > 0) {
//         int remainder = number % base;
//         result = char('0' + remainder) + result;  // prepend digit
//         number /= base;
//     }

//     cout << "The representation of " << decimal << " in base " << base << " is: " << result << endl;

//     return 0;
// }