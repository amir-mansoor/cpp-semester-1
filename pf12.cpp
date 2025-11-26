#include <iostream>
using namespace std;

// int main() {
//     for(int i = 1; i <= 5;i++) {
//         cout << i << endl;
//     }
//     return 0;
// }

// int main() {
//     int sum = 0;
//     for(int i = 1; i < 10; i++) {
//         sum += i;
//         cout << sum << endl;
//     }

    
// //     return 0;
// // }

// int main() {
//     int multiple = 1;
//     for(int i = 1;i < 6;i++) {
//         multiple = multiple * i;
//         cout << multiple << endl;
//     }


//     return 0;
// }

// int main() {
//     for(int line = 1; line <= 5; line++) {
//         for(int star = 1; star <= 5; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     for(int line = 1; line <= 5;line++) {
//         for(int star = 1; star <= line;star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     for(int line = 5; line >= 1; line--) {
//         for(int star = 1; star <= line; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     for(int line = 1; line <= 5; line++) {
//         for(int space = 5; space > line; space--) {
//             cout << " ";
//         }

//         for(int star = 1; star <= line; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     for(int line = 1; line <= 5; line++) {
//         for(int space = 1; space < line;space++) {
//             cout << "";
//         }

//         for(int star = 5; star >= line;star--) {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int g = 1;
//     for(int line = 1; line <= 5; line++) {
//         for(int space = 5; space > line; space--) {
//             cout << " ";
//         }

//         for(int star = 1; star <= g;star++) {
//             cout << "*";
//         }

//         g += 2;
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int g = 9;
//     for(int line = 1; line <= 5;line++) {
//         for(int space = 1; space < line; space++) {
//             cout << " ";
//         }

//         for(int star = 1; star <= g; star++) {
//             cout << "*";
//         }

//         g -= 2;
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int size = 7;
//     for(int line = size; line >= 1; line--) {
//         for(int space = 1; space <= line;space++) {
//             cout << " ";
//         }

//         for(int star = 1; star <= 2*(size - line + 1)- 1; star++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int size = 7;
//     for(int line = 1; line <= size; line++) {
    
//         for(int space = 1; space < line; space++) {
//             cout << " ";
//         }
    
//         for(int star = 1; star <= 2*(size-line)+1; star++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }
//     return 0;
// }

// int main() {
//     int n = 5;
//     for(int i = 1; i <= n;i++) {
//         for(int j = 1; j <= i;j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for(int i = n -1;i>=1;i--) {
//         for(int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     return 0;
// }


// int main() {
//     int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// int main() {
//     int n = 5;

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
        
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main() {
//     int size = 7;

//     for(int line = 1; line <= size; line++) {

//     for(int space = 1; space <= size-line; space++) {
//         cout << " ";
//     }

//     for(int star = 1; star <= 2*line-1; star++) {
//         cout << "*";
//     }
    
//     cout << endl;
    
//     }

//     for(int line = size-1; line >= 1; line--) {

//     for(int space = 1; space <= size-line; space++) {
//         cout << " ";
//     }

//     for(int star = 1; star <= 2*line-1; star++) {
//         cout << "*";
//     }
    
//     cout << endl;
    
//     }
    
//     return 0;
// }



// int main() {
//     int n = 5;

    
//     for (int i = 1; i <= n; i++) {
//         for (int s = 1; s <= n - i; s++)
//             cout << " ";
        
//         for (int st = 1; st <= (2 * i - 1); st++)
//             cout << "*";

//         cout << endl;
//     }


//     for (int i = n - 1; i >= 1; i--) {
//         for (int s = 1; s <= n - i; s++)
//             cout << " ";

//         for (int st = 1; st <= (2 * i - 1); st++)
//             cout << "*";

//         cout << endl;
//     }

//     return 0;
// }


// int main() {
//     int g = 9; 

//     for(int line = 0; line <= 3; line++) {
    
//         for(int space = 1; space <= line; space++) {
//             cout << " ";
//         }

//     for(int stars = 1; stars < g; stars++) {
//         cout << "*";
//     }
//     cout << endl;
//     g = g - 2;
//     }

//     for(int line = 1; line <= 5; line++) {

//         for(int space = 4; space > line; space--) {
//             cout << " ";
//         }

//     for(int stars = 1; stars < g; stars++) {
//         cout << "*";
//     }
//     cout << endl;
//     g = g + 2;
//     }
//     return 0;
// }

// int main() {

//     for(int line = 1; line <= 5; line++) {
    
//         for(int space = 1; space < line; space++) {
//             cout << " ";
//         }
    
//         for(int stars = 5; stars >= line; stars--) {
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     for(int line = 1; line <= 5; line++) {
    
//         for(int space = 5; space > line; space--) {
//             cout << " ";
//         }

//         for(int stars = 1; stars <= line; stars++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
    
//     for(int line = 1; line <= 5; line++) {
    
//         for(int stars = 5; stars >= line; stars--) {
//             cout << "*";
//         }
//         cout << endl;
//     }
    
//     for(int line = 1; line <= 5; line++) {
        
//         for(int stars = 1; stars <= line; stars++) {
//             cout << "*";
//         }
//     cout << endl;
//     }
//     return 0;
// }