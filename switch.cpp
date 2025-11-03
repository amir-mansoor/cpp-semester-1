#include <iostream>
using namespace std;

int main() {
    char num = 'c';
    switch(num % 2) {
        case 0:
            cout << "number is even" << endl;
            break;
        case 1:
            cout << "number is odd" << endl;
            break;
        default:
            cout << "default msg" << endl;
    }
    return 0;
}
