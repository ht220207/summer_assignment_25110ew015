#include <iostream>
#include <string>
using namespace std;

const int MAX_BOOKS = 50;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

void addBook(Book library[], int& count) {
    if (count >= MAX_BOOKS) {
        cout << "Library catalog full!\n";
        return;
    }
    cout << "Enter Book ID: ";
    cin >> library[count].id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, library[count].title);
    cout << "Enter Author: ";
    getline(cin, library[count].author);
    library[count].isIssued = false;
    count++;
    cout << "Book cataloged successfully!\n";
}

void viewBooks(const Book library[], int count) {
    if (count == 0) {
        cout << "Library collection is empty.\n";
        return;
    }
    cout << "\nID\tTitle\t\tAuthor\t\tStatus\n";
    cout << "-----------------------------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << library[i].id << "\t" << library[i].title << "\t\t" << library[i].author 
             << "\t\t" << (library[i].isIssued ? "Issued" : "Available") << "\n";
    }
}

void toggleIssueStatus(Book library[], int count, bool issueState) {
    int targetId;
    cout << "Enter Book ID: ";
    cin >> targetId;
    for (int i = 0; i < count; i++) {
        if (library[i].id == targetId) {
            if (library[i].isIssued == issueState) {
                cout << "Book is already in that state!\n";
            } else {
                library[i].isIssued = issueState;
                cout << "Book status updated successfully!\n";
            }
            return;
        }
    }
    cout << "Book ID not found.\n";
}

int main() {
    Book library[MAX_BOOKS];
    int bookCount = 0;
    int choice;

    do {
        cout << "\n=== Mini Library System ===\n";
        cout << "1. Add New Book\n2. View Catalog\n3. Issue a Book\n4. Return a Book\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(library, bookCount); break;
            case 2: viewBooks(library, bookCount); break;
            case 3: toggleIssueStatus(library, bookCount, true); break;
            case 4: toggleIssueStatus(library, bookCount, false); break;
            case 5: cout << "Closing Library System.\n"; break;
            default: cout << "Invalid Selection.\n";
        }
    } while (choice != 5);

    return 0;
}
