#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 10000, amount;

    do
    {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            cout << "Balance = " << balance << endl;
        }
        else if(choice == 2)
        {
            cout << "Enter Amount: ";
            cin >> amount;
            balance += amount;
        }
        else if(choice == 3)
        {
            cout << "Enter Amount: ";
            cin >> amount;

            if(amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance\n";
        }

    } while(choice != 4);

    return 0;
}