#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int rollNo;
    float english, maths, science, computer, hindi;
    float total, percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks in English: ";
    cin >> english;

    cout << "Enter Marks in Maths: ";
    cin >> maths;

    cout << "Enter Marks in Science: ";
    cin >> science;

    cout << "Enter Marks in Computer: ";
    cin >> computer;

    cout << "Enter Marks in Hindi: ";
    cin >> hindi;

    total = english + maths + science + computer + hindi;
    percentage = total / 5;

    cout << "\n========== MARKSHEET ==========\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;

    cout << "\nEnglish    : " << english << endl;
    cout << "Maths      : " << maths << endl;
    cout << "Science    : " << science << endl;
    cout << "Computer   : " << computer << endl;
    cout << "Hindi      : " << hindi << endl;

    cout << "\nTotal Marks : " << total << " / 500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade : A+";
    else if(percentage >= 80)
        cout << "Grade : A";
    else if(percentage >= 70)
        cout << "Grade : B";
    else if(percentage >= 60)
        cout << "Grade : C";
    else if(percentage >= 40)
        cout << "Grade : D";
    else
        cout << "Grade : F (Fail)";

    return 0;
}