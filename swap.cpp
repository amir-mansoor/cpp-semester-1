#include <iostream>
using namespace std;

int main(){
    int a,b,temp;

    cout << "Enter the first number for a: ";
    cin >> a;
    cout << "Enter the second number for b: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    // temp = a;
    // a = b;
    // b = temp;
    cout << "Now the value of a is: " << a << " and b is: " << b << endl;
    return 0;
}