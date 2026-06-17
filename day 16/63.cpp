#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool hasPairWithSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return true;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {10, 15, 3, 7};
    int target = 17;
    if (hasPairWithSum(arr, target))
        cout << "Pair with given sum exists." << endl;
    else
        cout << "Pair does not exist." << endl;
    return 0;
}
