#include <iostream>
#include <vector>
int main() {
int n;
std::cin >> n;
std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {
std::cin >> matrix[i][j];
}
}
bool symmetric = true;
for (int i = 0; i < n; ++i) {
for (int j = 0; j < n; ++j) {
if (matrix[i][j] != matrix[j][i]) {
symmetric = false;
break;
}
}
if (!symmetric) break;
}
if (symmetric)
std::cout << "The matrix is symmetric." << std::endl;
else
std::cout << "The matrix is NOT symmetric." << std::endl;
return 0;
}
