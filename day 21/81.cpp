#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); // Takes input with spaces

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of the string: " << length << endl;
    return 0;
}
