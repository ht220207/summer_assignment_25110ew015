#include <iostream>
using namespace std;

struct Contact
{
    char name[50];
    long long mobile;
    char email[50];
};

int main()
{
    Contact c;

    cout << "Enter Name: ";
    cin >> c.name;

    cout << "Enter Mobile Number: ";
    cin >> c.mobile;

    cout << "Enter Email: ";
    cin >> c.email;

    cout << "\n----- Contact Details -----\n";
    cout << "Name   : " << c.name << endl;
    cout << "Mobile : " << c.mobile << endl;
    cout << "Email  : " << c.email << endl;

    return 0;
}