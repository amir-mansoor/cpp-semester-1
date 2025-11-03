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
int main() {
    int n, sum=0, i=1;
    cout << "Enter a number: ";
    cin >> n;
    while(i <= n) {
        sum += i;
        i++;
    }

    cout << "Sum of first " << n << " numbers is " << sum << endl;
    return 0;
}