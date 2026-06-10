#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        // Print increasing characters
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch++;
        }
        // Print decreasing characters
        ch -= 2; // Point back to the character before the peak
        for (int j = 1; j < i; j++) {
            cout << ch--;
        }
        cout << "\n";
    }
    return 0;
}
