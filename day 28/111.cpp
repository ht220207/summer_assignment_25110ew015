#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int tickets;
    float price = 500;
    float total;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    total = tickets * price;

    cout << "\n----- Ticket Details -----\n";
    cout << "Name           : " << name << endl;
    cout << "Tickets Booked : " << tickets << endl;
    cout << "Price/Ticket   : " << price << endl;
    cout << "Total Amount   : " << total << endl;

    return 0;
}