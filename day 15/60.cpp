#include <iostream>
#include <vector>

void moveZeroesToEnd(std::vector<int>& arr) {
    int count = 0; // Tracks the index of the next available position
    
    // Move all non-zero elements to the front
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    
    // Fill the remaining array elements with 0
    while (count < arr.size()) {
        arr[count++] = 0;
    }
}
