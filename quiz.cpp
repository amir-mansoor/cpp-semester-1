#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3,num4;
    int sum, product;
    double avg;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;
    sum = num1+num2+num3+num4;
    product = num1*num2*num3*num4;
    avg = (num1+num2+num3+num4) / 4;

    cout << "Sum is: " << sum << endl;
    cout << "Product is: " << product << endl;
    cout << "Average is: " << avg << endl;
    return 0;
}