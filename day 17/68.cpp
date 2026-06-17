#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findCommonElements(const vector<int>& a, const vector<int>& b) {
    unordered_map<int, int> counts;
    for (int num : a) counts[num]++;
    
    vector<int> common;
    for (int num : b) {
        if (counts[num] > 0) {
            common.push_back(num);
            counts[num]--; // Prevents duplicates if numbers repeat
        }
    }
    return common;
}
