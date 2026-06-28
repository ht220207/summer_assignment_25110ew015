#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

char firstRepeating(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            return c;
        }
        seen.insert(c);
    }
    return '$'; // Return '$' if no character repeats
}

int main() {
    string str = "abccba";
    cout << "First repeating character: " << firstRepeating(str) << endl;
    return 0;
}
