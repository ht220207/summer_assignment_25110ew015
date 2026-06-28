#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char firstNonRepeating(string s) {
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    for (char c : s) {
        if (count[c] == 1) {
            return c;
        }
    }
    return '$'; // Return '$' if no non-repeating character exists
}

int main() {
    string str = "geeksforgeeks";
    cout << "First non-repeating character: " << firstNonRepeating(str) << endl;
    return 0;
}
