#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> merged;
    merged.reserve(a.size() + b.size());
    merged.insert(merged.end(), a.begin(), a.end());
    merged.insert(merged.end(), b.begin(), b.end());
    return merged;
}
