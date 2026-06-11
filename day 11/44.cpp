#include <iostream>
using namespace std;

// Function to find factorial using an iterative approach
// Uses unsigned long long to handle larger results safely
unsigned long long findFactorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << findFactorial(num) << endl;
    return 0;
}
