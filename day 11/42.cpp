#include <iostream>
using namespace std;

// Function to find the maximum between two numbers
int findMaximum(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    return num2;
}

int main() {
    int a = 45, b = 82;
    cout << "Maximum: " << findMaximum(a, b) << endl;
    return 0;
}
