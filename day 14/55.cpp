#include <iostream>
#include <vector>
#include <climits>

int findSecondLargest(const std::vector<int>& arr) {
    if (arr.size() < 2) return -1;
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }
    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    std::vector<int> arr = {12, 35, 1, 10, 34, 1};
    std::cout << "Second largest element: " << findSecondLargest(arr) << std::endl;
    return 0;
}
