#include <iostream>
using namespace std;


// int main(){
//     for(int i = 1; i <= 10;i++) {
//         cout << "Hello world" << endl;
//     }

//     return 0;
// }

// int main() {
//     int start = 0;
//     int end = 0;
//     int sum = 0;
//     cout << "Enter the starting number: ";
//     cin >> start;
//     cout << "Enter the ending number: ";
//     cin >> end;
//     for(int i = start; i <= end; i++) {
//         sum += i;
//     }
//     cout << "The sum from " << start << " to " << end << " is " << sum << endl;
//     return 0;
// }

// int main() {
//     int start = 0;
//     int end = 0;
//     cout << "Enter the starting number: ";
//     cin >> start;
//     cout << "Enter the ending number: ";
//     cin >> end;
//     for(int i = start; i <= end; i++) {
//         if(i % 2 == 0) {
//             cout << i << " is even" << endl;
//         } else {
//             cout << i << " is odd" << endl;
//         }
//     }
//     return 0;

// }

// int main() {
//     for(int line = 1; line <= 5; line++) {
//         for(int star = 0; star < line; star++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int size = 0;
//     cout << "Enter size: ";
//     cin >> size;

//     for (int line = 1; line <= size; line++) {
//         for(int i = 1; i <= line; i++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// int main() {
//     int size = 0;
//     cout << "Enter size: ";
//     cin >> size;

    

//     for(int line = 1; line <= size; line++) {
//         for(int space = 1; space <= (size-line); space++) {
//             cout << " ";
//         }

//         for(int star = 1; star <= line; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

int main() {
    int size = 5;
    for(int line = 1; line <= size; line++) {
        
        if(line == 1 || line == size) {
            for(int star = 1; star <= size;star++) {
                cout << "*";
            }
        } else {
            cout << "*";
            for(int space = 1; space <= (size-2); space++) {
                cout << " ";
            }

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

