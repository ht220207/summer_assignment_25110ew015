#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;

struct Employee {
    int id;
    string name;
    string designation;
    double baseSalary;
};

void registerEmployee(Employee staff[], int& total) {
    if (total >= MAX_EMPLOYEES) {
        cout << "Roster limits reached!\n";
        return;
    }
    cout << "Enter Employee ID: ";
    cin >> staff[total].id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, staff[total].name);
    cout << "Enter Designation: ";
    getline(cin, staff[total].designation);
    cout << "Enter Base Monthly Salary: ";
    cin >> staff[total].baseSalary;
    total++;
    cout << "Profile created successfully.\n";
}

void displayStaffList(const Employee staff[], int total) {
    if (total == 0) {
        cout << "No employees currently registered.\n";
        return;
    }
    cout << "\nID\tName\t\tDesignation\tSalary\n";
    cout << "-----------------------------------------------\n";
    for (int i = 0; i < total; i++) {
        cout << staff[i].id << "\t" << staff[i].name << "\t\t" << staff[i].designation << "\t\t$" << staff[i].baseSalary << "\n";
    }
}

void displaySalarySlip(const Employee staff[], int total) {
    int searchId;
    cout << "Enter Employee ID for Salary Calculation: ";
    cin >> searchId;
    for (int i = 0; i < total; i++) {
        if (staff[i].id == searchId) {
            double allowance = staff[i].baseSalary * 0.15; // 15% bonus/allowances
            double deductions = staff[i].baseSalary * 0.05; // 5% tax withholding
            double netPay = staff[i].baseSalary + allowance - deductions;

            cout << "\n--- Payslip for " << staff[i].name << " ---\n";
            cout << "Designation: " << staff[i].designation << "\n";
            cout << "Base Salary: $" << staff[i].baseSalary << "\n";
            cout << "Allowances:  +$" << allowance << "\n";
            cout << "Deductions:  -$" << deductions << "\n";
            cout << "Net Take-Home Pay: $" << netPay << "\n";
            return;
        }
    }
    cout << "Employee profile matching ID " << searchId << " missing.\n";
}

int main() {
    Employee staff[MAX_EMPLOYEES];
    int currentStaffSize = 0;
    int choice;

    do {
        cout << "\n=== Employee Management Console ===\n";
        cout << "1. Register New Employee\n2. View Employee Directory\n3. Calculate Net Payroll\n4. Exit\n";
        cout << "Enter Option: ";
        cin >> choice;

        switch (choice) {
            case 1: registerEmployee(staff, currentStaffSize); break;
            case 2: displayStaffList(staff, currentStaffSize); break;
            case 3: displaySalarySlip(staff, currentStaffSize); break;
            case 4: cout << "Exiting Console. Goodbye!\n"; break;
            default: cout << "Invalid option entered.\n";
        }
    } while (choice != 4);

    return 0;
}
