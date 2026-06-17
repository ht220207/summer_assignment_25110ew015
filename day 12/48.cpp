#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n && n != 0;
}

int main() {
    int num = 6;
    if (isPerfect(num))
        cout << num << " is a perfect number." << endl;
    return 0;
}
