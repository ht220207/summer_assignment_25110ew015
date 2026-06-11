#include <iostream>
using namespace std;

// Function to calculate the sum of two numbers
int findSum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a = 15, b = 25;
    cout << "Sum: " << findSum(a, b) << endl;
    return 0;
}
