#include <iostream>
using namespace std;

int main()
{
    char name[50];
    long long accNo;
    float balance, amount;
    int choice;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> balance;

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
            cout << "Enter Deposit Amount: ";
            cin >> amount;
            balance += amount;
        }
        else if(choice == 3)
        {
            cout << "Enter Withdraw Amount: ";
            cin >> amount;

            if(amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal Successful\n";
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
        }

    } while(choice != 4);

    return 0;
}