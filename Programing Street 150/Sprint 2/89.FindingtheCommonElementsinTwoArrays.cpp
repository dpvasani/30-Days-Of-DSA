#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findCommonElements(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> set1(arr1.begin(), arr1.end());
    vector<int> common;
    for (int num : arr2)
        if (set1.count(num))
            common.push_back(num);
    return common;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4}, arr2 = {3, 4, 5, 6};
    vector<int> common = findCommonElements(arr1, arr2);
    for (int num : common) cout << num << " ";
    cout << endl;
    return 0;
}
