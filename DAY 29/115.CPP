#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, str2;
    int choice;
    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- String Menu ---\n";
        cout << "1. Display String\n2. Find Length\n3. Reverse String\n4. Concatenate\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); 

        switch(choice) {
            case 1: cout << "String: " << str << endl; break;
            case 2: cout << "Length: " << str.length() << endl; break;
            case 3: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed: " << temp << endl; break;
            }
            case 4:
                cout << "Enter string to append: ";
                getline(cin, str2);
                str += str2;
                cout << "New String: " << str << endl; break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 5);
    return 0;
}
