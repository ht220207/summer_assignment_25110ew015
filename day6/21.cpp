#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";
    string binary = "";
    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int n;
    if (cin >> n) {
        cout << decimalToBinary(n) << endl;
    }
    return 0;
}
