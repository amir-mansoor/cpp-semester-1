#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int multiplier = 1;
    while(multiplier <= 10) {
        cout << number << " x " << multiplier << " = " << number*multiplier << endl;
        multiplier = multiplier + 1;
    }
  
    return 0;
}