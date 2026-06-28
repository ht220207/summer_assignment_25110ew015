#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

void displayInventory(const vector<Item>& inventory) {
    cout << "\nID\tName\tQty\tPrice\n";
    cout << "-------------------------------------\n";
    for(const auto& item : inventory) {
        cout << item.id << "\t" << item.name << "\t" << item.quantity << "\t$" << item.price << endl;
    }
}

int main() {
    vector<Item> inventory;
    int choice;
    
    do {
        cout << "\n--- Inventory Menu ---\n";
        cout << "1. Add Item\n2. View Inventory\n3. Total Inventory Value\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                Item newItem;
                cout << "Enter Item ID: "; cin >> newItem.id;
                cout << "Enter Item Name: "; cin >> newItem.name;
                cout << "Enter Quantity: "; cin >> newItem.quantity;
                cout << "Enter Price: "; cin >> newItem.price;
                inventory.push_back(newItem);
                cout << "Item added successfully!\n"; break;
            }
            case 2:
                if(inventory.empty()) cout << "Inventory is empty.\n";
                else displayInventory(inventory);
                break;
            case 3: {
                double totalValue = 0;
                for(const auto& item : inventory) {
                    totalValue += (item.quantity * item.price);
                }
                cout << "Total Inventory Value: $" << totalValue << endl; break;
            }
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 4);
    return 0;
}
