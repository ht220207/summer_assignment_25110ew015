#include <iostream>
#include <vector>
int main() {
int m, n;
std::cin >> m >> n;
std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
for (int i = 0; i < m; ++i) {
for (int j = 0; j < n; ++j) {
std::cin >> matrix[i][j];
}
}
for (int i = 0; i < m; ++i) {
int sum = 0;
for (int j = 0; j < n; ++j) {
sum += matrix[i][j];
}
std::cout << "Sum of row " << i + 1 << ": " << sum << std::endl;
}
return 0;
}
