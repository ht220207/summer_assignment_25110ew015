#include <iostream>
#include <vector>
int main() {
int r1, c1, r2, c2;
std::cin >> r1 >> c1 >> r2 >> c2;
if (c1 != r2) {
std::cout << "Matrix multiplication not possible." << std::endl;
return 0;
}
std::vector<std::vector<int>> a(r1, std::vector<int>(c1));
std::vector<std::vector<int>> b(r2, std::vector<int>(c2));
std::vector<std::vector<int>> result(r1, std::vector<int>(c2, 0));
for (int i = 0; i < r1; ++i)
for (int j = 0; j < c1; ++j)
std::cin >> a[i][j];
for (int i = 0; i < r2; ++i)
for (int j = 0; j < c2; ++j)
std::cin >> b[i][j];
for (int i = 0; i < r1; ++i) {
for (int j = 0; j < c2; ++j) {
for (int k = 0; k < c1; ++k) {
result[i][j] += a[i][k] * b[k][j];
}
}
}
for (int i = 0; i < r1; ++i) {
for (int j = 0; j < c2; ++j) {
std::cout << result[i][j] << " ";
}
std::cout << "\n";
}
return 0;
}
