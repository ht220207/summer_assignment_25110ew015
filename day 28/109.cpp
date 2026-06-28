#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    Book b;

    cout << "Enter Book ID: ";
    cin >> b.bookId;

    cout << "Enter Book Title: ";
    cin >> b.title;

    cout << "Enter Author Name: ";
    cin >> b.author;

    cout << "\n----- Library Record -----\n";
    cout << "Book ID : " << b.bookId << endl;
    cout << "Title   : " << b.title << endl;
    cout << "Author  : " << b.author << endl;

    return 0;
}