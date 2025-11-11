#include <iostream>
using namespace std;
// Display a menu of food items and print the price based on user selection using switch.
int main() {
    int choice;
    cout << "Menu: " << endl;
    cout << "1. Burger" << endl;
    cout << "2. Pizza" << endl;
    cout << "3. Salad" << endl;
    cout << "4. Soda" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected Burger. Price: $5" << endl;
            break;
        case 2:
            cout << "You selected Pizza. Price: $8" << endl;
            break;
        case 3:
            cout << "You selected Salad. Price: $4" << endl;
            break;
        case 4:
            cout << "You selected Soda. Price: $2" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}