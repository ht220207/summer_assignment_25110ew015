#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // 'A' + i - 1 gives A on 1st row, B on 2nd, etc.
            cout << (char)('A' + i - 1); 
        }
        cout << "\n";
    }
    return 0;
}
