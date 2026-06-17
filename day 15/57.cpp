#include <iostream>
#include <vector>
#include <algorithm>

void reverseArray(std::vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;
    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
