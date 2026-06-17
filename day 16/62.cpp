#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findMaxFrequency(const vector<int>& arr) {
    unordered_map<int, int> freqMap;
    int maxFreq = 0;
    int maxElement = -1;

    for (int num : arr) {
        freqMap[num]++;
        if (freqMap[num] > maxFreq) {
            maxFreq = freqMap[num];
            maxElement = num;
        }
    }
    return maxElement;
}

int main() {
    vector<int> arr = {1, 3, 2, 1, 4, 1, 3};
    cout << "Most Frequent Element: " << findMaxFrequency(arr) << endl;
    return 0;
}
