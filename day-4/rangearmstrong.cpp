#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        int temp = n, sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if (sum == n)
            cout << n << " ";
    }

    return 0;
}