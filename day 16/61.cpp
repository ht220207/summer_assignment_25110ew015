#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
    int expectedSum = N * (N + 1) / 2;
    int actualSum = accumulate(arr.begin(), arr.end(), 0);
    return expectedSum - actualSum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5}; // Missing 3
    int N = 5;
    cout << "Missing Number: " << findMissingNumber(arr, N) << endl;
    return 0;
}
