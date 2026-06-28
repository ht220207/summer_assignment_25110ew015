#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, ans = "";

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ')
            ans += s[i];
    }

    cout << "String after removing spaces: " << ans;

    return 0;
}