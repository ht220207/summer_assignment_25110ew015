#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter rows and columns of matrices: ";
    cin >> rows >> cols;

    int A[rows][cols], B[rows][cols], diff[rows][cols];

    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Subtracting matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Resulting Matrix (A - B):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
