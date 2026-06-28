#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    string str1 = "listen";
    string str2 = "silent";
    if (areAnagrams(str1, str2))
        cout << str1 << " and " << str2 << " are Anagrams." << endl;
    else
        cout << str1 << " and " << str2 << " are NOT Anagrams." << endl;
    return 0;
}
