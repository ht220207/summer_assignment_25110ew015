#include <iostream>
#include <vector>

void rotateLeft(std::vector<int>& arr) {
    if (arr.empty()) return;
    int first = arr[0];
    for (size_t i = 0; i < arr.size() - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = first;
}
