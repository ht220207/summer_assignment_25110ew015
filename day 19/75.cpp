#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns of the matrix: ";
    cin >> rows >> cols;

    int matrix[rows][cols];
    int transpose[cols][rows]; // Rows and columns swap for transpose

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Computing transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
