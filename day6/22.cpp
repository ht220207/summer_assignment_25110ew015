#include <iostream>
#include <string>

using namespace std;

int binaryToDecimal(string s) {
    int ans = 0;
    int base = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            ans += base;
        }
        base *= 2;
    }
    return ans;
}

int main() {
    string s;
    if (cin >> s) {
        cout << binaryToDecimal(s) << endl;
    }
    return 0;
}
