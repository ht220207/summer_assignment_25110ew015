#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 1) {
        cout << "1 is neither prime nor composite." << endl;
        return 0;
    }

    if (n <= 0) {
        cout << n << " is not prime." << endl;
        return 0;
    }

    int flag = 1;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is a composite number." << endl;
    }

    return 0;
}
