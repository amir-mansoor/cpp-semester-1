
#include <iostream>
using namespace std;

// here we will solve the equation x+y=a it will be solve for y 
// int main(){
//     int x = 0;
//     int a = 0;
//     cout << "The equation to be solved is: x+y=a " << endl;
//     cout << "Enter the value of x: ";
//     cin >> x;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     int y = a - x;
//     cout << "The value of y is: " << y << endl;
//     return 0;
// }

// here we will solve the equation of motion by pascal newton for f = ma
// int main() {
//     int a = 0;
//     int m = 0;
//     cout << "The equation will be solveed for F = ma" << endl;
//     cout << "Enter the value of m: ";
//     cin >> m;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "The value of F = " << m*a << endl;
//     return 0;
// }

// Solve Newton’s Equation of motion v=u+at
// int main() {
//     int u = 0;
//     int a = 0;
//     int t = 0;
//     cout << "The equation to be solved v=u+at " << endl;
//     cout << "Enter the value of u: ";
//     cin >> u;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of t: ";
//     cin >> t;
//     int v = u+(a*t);
//     cout << "The value of v = " << v << endl;
//     return 0;
// }

// Find the value of c from equation ax2+bx+c=0. Quadratic equations
// int main() {
//     int x = 0;
//     int a = 0;
//     int b = 0;
//     cout << "The equation to be solved is ax^2 + bx + c = 0" << endl;
//     cout << "Enter the value of x: ";
//     cin >> x;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     int c = (-1*((a*(x*x)) + (b*x)));
//     cout << "The value of c is: " << c << endl;
//     return 0;
// }

// Write a program to compute the value of discrimination(x = b2-4ac)
int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "The equation to be solved is x = b^2-4ac" << endl;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    int x = ((b*b) - (4*(a*c)));
    cout << "The value of x is " << x << endl;
    return 0;
}