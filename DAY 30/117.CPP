#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int rollNumber;
    string name;
    double marks;
};

void addStudent(Student students[], int& count) {
    if (count >= MAX_STUDENTS) {
        cout << "System full! Cannot add more students.\n";
        return;
    }
    cout << "Enter Roll Number: ";
    cin >> students[count].rollNumber;
    cin.ignore(); // Clear newline buffer
    cout << "Enter Name: ";
    getline(cin, students[count].name);
    cout << "Enter Marks: ";
    cin >> students[count].marks;
    count++;
    cout << "Record added successfully!\n";
}

void displayStudents(const Student students[], int count) {
    if (count == 0) {
        cout << "No records available.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "--------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << students[i].rollNumber << "\t" << students[i].name << "\t\t" << students[i].marks << "\n";
    }
}

void searchStudent(const Student students[], int count) {
    if (count == 0) {
        cout << "No records available to search.\n";
        return;
    }
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;
    for (int i = 0; i < count; i++) {
        if (students[i].rollNumber == roll) {
            cout << "Record Found:\nName: " << students[i].name << "\nMarks: " << students[i].marks << "\n";
            return;
        }
    }
    cout << "Student with Roll Number " << roll << " not found.\n";
}

int main() {
    Student students[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    do {
        cout << "\n=== Student Record System ===\n";
        cout << "1. Add Student\n2. Display All Students\n3. Search Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(students, studentCount); break;
            case 2: displayStudents(students, studentCount); break;
            case 3: searchStudent(students, studentCount); break;
            case 4: cout << "Exiting system.\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
