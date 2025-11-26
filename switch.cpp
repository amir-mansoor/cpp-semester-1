#include <iostream>
using namespace std;

// int main() {
//     char opr;
//     double firstNumber, secondNumber;
//     cout << "Enter number opr number" << endl;
//     cin >> firstNumber >> opr >> secondNumber;
//     switch(opr) {
//         case '+':
//             cout << "Sum " << firstNumber + secondNumber << endl;
//             break;
//         case '-':
//             cout << "Difference " << firstNumber - secondNumber << endl;
//             break;
//         case '*':
//             cout << "Multiply " << firstNumber * secondNumber << endl;
//             break;
//         case '/':
//             cout << "Divide " << firstNumber / secondNumber << endl;
//             break;
//         default:
//             cout << "You have enter an invalid operator" << endl;
//     }
//     return 0;
// }

// int main(){
// 	int number;
// 	cout << "Enter a number number: ";
// 	cin >> number;
//     switch(number) {
//         case 0:
//             cout << "Zero" << endl;
//             break;
//         case 1:
//             cout << "One" << endl;
//             break;
//         case 2:
//             cout << "Two" << endl;
//             break;
//         case 3:
//             cout << "Three" << endl;
//             break;
//         default:
//             cout << "You have entered an invalid number" << endl;
//     }
//     return 0;
// }

int main(){
	int marks;
	cout << "Enter marks (0-100): ";
	cin >> marks;

    cout << marks / 10 << endl;

    switch(marks / 10) {
        case 10:
        case 9:
        case 8:
            cout << "Grade A" << endl;
            break;
        case 7:
            cout << "Grade B" << endl;
            break;
        case 6:
            cout << "Grade C" << endl;
            break;
        case 5:
            cout << "Grade D" << endl;
            break;
        default:
            cout << "Grade F" << endl;
    }
    return 0;
}









