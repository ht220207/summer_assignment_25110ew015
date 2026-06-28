#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (N x N): ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];         // Top-left to bottom-right
        secondarySum += matrix[i][n - 1 - i]; // Top-right to bottom-left
    }

    cout << "Sum of Primary Diagonal: " << primarySum << endl;
    cout << "Sum of Secondary Diagonal: " << secondarySum << endl;

    return 0;
}
