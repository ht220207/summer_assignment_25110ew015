#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> getUnion(const vector<int>& a, const vector<int>& b) {
    unordered_set<int> s(a.begin(), a.end());
    s.insert(b.begin(), b.end());
    return vector<int>(s.begin(), s.end());
}
