#include <iostream>
using namespace std;

int main()
{
    char name[50];
    float basic, hra, da, gross;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    cout << "\n----- Salary Slip -----\n";
    cout << "Employee Name : " << name << endl;
    cout << "Basic Salary  : " << basic << endl;
    cout << "HRA (20%)     : " << hra << endl;
    cout << "DA (10%)      : " << da << endl;
    cout << "Gross Salary  : " << gross << endl;

    return 0;
}