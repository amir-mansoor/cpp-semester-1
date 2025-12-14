#include <iostream>
using namespace std;

// int main() {
//     int number;
//     cin >> number;
//     int multiplier = 1;
//     while(multiplier <= 10) {
//         cout << number << " x " << multiplier << " = " << number*multiplier << endl;
//         multiplier = multiplier + 1;
//     }
  
//     return 0;
// }

// int main() {
//     int counter = 0;
//     int number = 0;
//     cout << "Enter number: ";
//     cin >> number;
//     int temp = number;
//     while(temp > 0) {
//         counter = counter + 1;
//         temp = temp / 10;
//         // cout << temp << endl;
//     }

//     cout << "The number of digits in number is: " << counter << endl;
//     return 0;
// }

// int main() {
//     int number = 0;
//     int reverse = 0;
//     cout << "Enter number: ";
//     cin >> number;
//     int temp = number;
//     while(temp > 0) {
//         reverse = reverse * 10;
//         reverse = reverse + (temp % 10);
//         temp = temp / 10; 
//     }

//     cout << "The reverse of the number is: " << reverse << endl;
//     return 0;
// }

// You have to write a program to check whether the given number is palindrome or not
// int main() {
//     int number = 0;
//     int reverse = 0;
//     cout << "Enter number: ";
//     cin >> number;
//     int temp = number;
//     while(temp > 0) {
//         reverse = reverse * 10;
//         reverse = reverse + (temp % 10);
//         temp = temp / 10; 
//     }

//     if(reverse == number) {
//         cout << "The number is palindrome" << endl;
//     } else {
//         cout << "The number is not palindrome " << endl;
//     }

//     // cout << "The reverse of the number is: " << reverse << endl;
//     return 0;
// }

// You have to write a program to check whether given number is prime or not.
// int main() {
//     bool isPrime = true;
//     int number = 0;
//     int divider = 2;
//     cout << "Enter number: ";
//     cin >> number;
//     while((divider <= (number / 2)) && (isPrime == true)) {
//         if((number % divider == 0) && (divider != number)) {
//             isPrime = false;
//         }
//         divider += 1;
//     }

//     if(isPrime) {
//         cout << "The number is prime" << endl;
//     } else {
//         cout << "The number is not prime" << endl;
//     }

//     return 0;
// }

// User want you to make a program to check even or odd. And after each result you have to ask user if he/she want to terminate the program. If the answer is yes you are allowed to terminate the program otherwise program will run infinite time.
// int main() {
//     char character;
//     do {

//         int number = 0;
//         cout << "Enter the number";
//         cin >> number;
//         switch(number % 2) {
//             case 0:
//                 cout << "Number is even " << number << endl;
//                 break;
//             case 1:
//                 cout << "Number is odd" << number << endl;
                
//         }
//         cout << "You want to terminate the program" << endl;
//         cin >> character;
//     } while (character != 'Y' && character != 'y');
//     return 0;
// }

// User want you to make a program to check whether the given year is leap year or not. And after each result you have to ask user if he/she want to terminate the program. If the answer is yes you are allowed to terminate the program otherwise program will run infinite time.
// int main() {
//     char character;
//     do {

//         int year = 0;
//         cout << "Enter the year";
//         cin >> year;
//         if(((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))) {
//             cout << "The year is a leap year" << endl;
//         } else {
//             cout << "Year is not a leap year";
//         }

//         cout << "You want to terminate the program" << endl;
//         cin >> character;
//     } while (character != 'Y' && character != 'y');
//     return 0;
// }