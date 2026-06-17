#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    // Find number of digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    // Calculate sum of powered digits
    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return original == sum;
}

int main() {
    int num = 153;
    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    return 0;
}
