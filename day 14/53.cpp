#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    std::vector<int> arr = {4, 2, 9, 7, 5};
    int target = 7;
    int index = linearSearch(arr, target);
    std::cout << "Element found at index: " << index << std::endl;
    return 0;
}
