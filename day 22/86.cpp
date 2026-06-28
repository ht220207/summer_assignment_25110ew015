#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int words = 1;

    cout << "Enter a sentence: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && s[i + 1] != ' ')
            words++;
    }

    cout << "Number of words = " << words;

    return 0;
}