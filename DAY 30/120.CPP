#include <iostream>
#include <string>
using namespace std;

const int MAX_TASKS = 30;

// Globally isolated array structures passed explicitly to function blocks
string taskTitles[MAX_TASKS];
string taskPriorities[MAX_TASKS];
bool taskStatus[MAX_TASKS]; // false = Pending, true = Completed

void createTask(int& taskCount) {
    if (taskCount >= MAX_TASKS) {
        cout << "Task tracking buffer is entirely full.\n";
        return;
    }
    cin.ignore();
    cout << "Enter Task Description/Title: ";
    getline(cin, taskTitles[taskCount]);
    
    cout << "Enter Priority Level (High/Medium/Low): ";
    getline(cin, taskPriorities[taskCount]);
    
    taskStatus[taskCount] = false; // System defaults new entries to unfinished status
    taskCount++;
    cout << "New assignment logged safely.\n";
}

void showDashboard(int taskCount) {
    if (taskCount == 0) {
        cout << "Your workflow backlog is clear!\n";
        return;
    }
    cout << "\nIndex\tTask Description\tPriority\tStatus\n";
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < taskCount; i++) {
        cout << "[" << i + 1 << "]\t" << taskTitles[i] << "\t\t" 
             << taskPriorities[i] << "\t\t" << (taskStatus[i] ? "Completed" : "Pending") << "\n";
    }
}

void updateProgress(int taskCount) {
    if (taskCount == 0) {
        cout << "No current tasks available to modify.\n";
        return;
    }
    int taskIdx;
    showDashboard(taskCount);
    cout << "Select Index Number to check off: ";
    cin >> taskIdx;

    if (taskIdx >= 1 && taskIdx <= taskCount) {
        taskStatus[taskIdx - 1] = true;
        cout << "Task progress finalized successfully.\n";
    } else {
        cout << "Index value parameter falls outside current limits.\n";
    }
}

int main() {
    int trackingCount = 0;
    int selectedMenuOption;

    do {
        cout << "\n==== Workflow & Task Dashboard ====\n";
        cout << "1. Add New Workflow Assignment\n2. Render Dashboard Logs\n3. Mark an Assignment Completed\n4. Terminate Dashboard\n";
        cout << "Provide Navigation Selection: ";
        cin >> selectedMenuOption;

        switch (selectedMenuOption) {
            case 1: createTask(trackingCount); break;
            case 2: showDashboard(trackingCount); break;
            case 3: updateProgress(trackingCount); break;
            case 4: cout << "Shutting down pipeline processes safely.\n"; break;
            default: cout << "Faulty interface choice selected. Try again.\n";
        }
    } while (selectedMenuOption != 4);

    return 0;
}
