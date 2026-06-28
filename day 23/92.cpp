#include <iostream>
#include <string>
#include <vector>
using namespace std;

char maxOccurring(string s) {
    vector<int> count(256, 0);
    int max_val = -1;
    char result = ' ';

    for (char c : s) {
        count[c]++;
    }

    for (char c : s) {
        if (count[c] > max_val) {
            max_val = count[c];
            result = c;
        }
    }
    return result;
}

int main() {
    string str = "testsample";
    // Fixed: Changed getMaxOccurring to maxOccurring to match the definition
    cout << "Maximum occurring character: " << maxOccurring(str) << endl; 
    return 0;
}



