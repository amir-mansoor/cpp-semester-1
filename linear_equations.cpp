// here we will solve the equation x+y=a it will be solve for y 
#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int a = 0;
    cout << "The equation to be solved is: x+y=a " << endl;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of a: ";
    cin >> a;
    int y = a - x;
    cout << "The value of y is: " << y << endl;
    return 0;
}