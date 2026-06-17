#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num = 121;
    if (isPalindrome(num))
        cout << num << " is a palindrome." << endl;
    return 0;
}
