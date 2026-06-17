#include <iostream>
#include <vector>

int countFrequency(const std::vector<int>& arr, int target) {
    int count = 0;
    for (int num : arr) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 4, 2, 5};
    int target = 2;
    std::cout << "Frequency of " << target << ": " << countFrequency(arr, target) << std::endl;
    return 0;
}
