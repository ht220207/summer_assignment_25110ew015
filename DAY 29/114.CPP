#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, val;
    cout << "Enter initial number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    do {
        cout << "\n--- Array Menu ---\n";
        cout << "1. Display Array\n2. Sum of Elements\n3. Find Max\n4. Find Min\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Array: ";
                for(int i = 0; i < n; i++) cout << arr[i] << " ";
                cout << endl; break;
            case 2: {
                int sum = 0;
                for(int i = 0; i < n; i++) sum += arr[i];
                cout << "Sum: " << sum << endl; break;
            }
            case 3: {
                int max_val = arr[0];
                for(int i = 1; i < n; i++) max_val = max(max_val, arr[i]);
                cout << "Max: " << max_val << endl; break;
            }
            case 4: {
                int min_val = arr[0];
                for(int i = 1; i < n; i++) min_val = min(min_val, arr[i]);
                cout << "Min: " << min_val << endl; break;
            }
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 5);
    return 0;
}
