#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    bool present[256] = {false};

    for(int i = 0; i < s1.length(); i++)
        present[(int)s1[i]] = true;

    cout << "Common Characters: ";

    bool printed[256] = {false};

    for(int i = 0; i < s2.length(); i++)
    {
        if(present[(int)s2[i]] && !printed[(int)s2[i]])
        {
            cout << s2[i] << " ";
            printed[(int)s2[i]] = true;
        }
    }

    return 0;
}