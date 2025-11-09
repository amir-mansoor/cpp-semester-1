#include <iostream>
using namespace std;

// int main() {
//     for(int i = 1; i <= 10; i++) {
//         cout << i << endl;
//     }
//     return 0;
// }

// int main() {
//     int i = 1;
//     while(i <= 10) {
//         cout << i << endl;
//         i++;
//     }
//     return 0;
// }

// sum from 0 to n
// int main() {
//     int n, sum=0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     cout << "Sum of first " << n << " numbers is " << sum << endl;
//     return 0;
// }

// now in while
// int main() {
//     int n, sum=0, i=1;
//     cout << "Enter a number: ";
//     cin >> n;
//     while(i <= n) {
//         sum += i;
//         i++;
//     }

//     cout << "Sum of first " << n << " numbers is " << sum << endl;
//     return 0;
// }

// int main() {
//     for(int i = 0; i <= 20; i++) {
//         if(i % 2 == 0) {
//             cout << i << " is even number" << endl;
//         }
//     }

//     return 0;
// }

// int main() {
//     int i = 0;
//     while(i <= 20) {
//         if(i % 2 == 0) {
//             cout << i << " is even number" << endl;
//         }
//         i++;
//     }

//     return 0;
// }

// int main() {
//     cout << "Solve the equation for x+y=a? find x?" << endl;
//     int a,x,y;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter y: ";
//     cin >> y;
//     cout << "x = a - y" << endl;
//     x = a - y;
//     cout << "answer of x is " << x << endl;
//     return 0;
// }

// int main() {
//     for(int i = 1; i <= 10; i++) {
//         cout << "5" << " x " << i << " = " << 5*i << endl; 
//     }
//     return 0;
// }

int main() {
    cout << "Solve the equation x = (b^2) - 4ac" << endl;

    int a,b,c,x;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    x = (b*b)-(4*a*c);

    cout << "Value of x is: " << x << endl;
    return 0;
}