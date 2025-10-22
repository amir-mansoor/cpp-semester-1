#include <iostream>
using namespace std;

// Declare and initialize two variables and print sum of them
// int main(){
//     int number_one = 20;
//     int number_two = 30;

//     cout << "Sum of " << number_one << " + " << number_two << "=" << (number_one+number_two) << endl;
//     return 0;
// }

// Declare two numbers take input from user and print sum of them
// int main(){
//     int number_one;
//     int number_two;
//     cout << "Enter first number: ";
//     cin >> number_one;
//     cout << "Enter second number: ";
//     cin >> number_two;
//     int sum = number_one+number_two;
//     cout << "Sum of number is: " << sum << endl;
//     return 0;
// }

// check the number is even or odd
// int main() {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     if(number % 2 == 0){
//         cout << number << " is even" << endl;
//     } else {
//         cout << number << " is odd" << endl;
//     }
//     return 0;
// }

// check the number is greater than 10 or not
// int main() {
//     int number;
//     cout << "Enter number: ";
//     cin >> number;

//     if(number > 10) {
//         cout << number << " is greater than 10" << endl;
//     } else {
//         cout << number << " is less than 10" << endl;
//     }

//     return 0;
// }

// Check percentage of numbers
int main() {
    int total_marks;
    int obtaned_marks;
    int percentage;
    cout << "Enter total marks: ";
    cin >> total_marks;
    cout << "Enter obtained Marks: ";
    cin >> obtaned_marks;
    percentage = (obtaned_marks*100)/total_marks;
    cout << "Your percentage is: " << percentage << "%" << endl;
    return 0;
}