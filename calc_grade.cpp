#include <iostream>
using namespace std;

int main() {
    int total_marks = 0;
    int obtained_marks = 0;
    cout << "This program will print your grade" << endl;
    cout << "Enter total marks: ";
    cin >> total_marks;
    cout << "Enter obtained marks: ";
    cin >> obtained_marks;

    int percentage = (obtained_marks/total_marks)*100;

    cout << "Percentage: " << percentage << endl;
    return 0;
}