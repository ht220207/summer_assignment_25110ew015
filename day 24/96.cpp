#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    bool visited[256] = {false};

    for(int i = 0; i < str.length(); i++)
    {
        if(!visited[(int)str[i]])
        {
            cout << str[i];
            visited[(int)str[i]] = true;
        }
    }

    return 0;
}