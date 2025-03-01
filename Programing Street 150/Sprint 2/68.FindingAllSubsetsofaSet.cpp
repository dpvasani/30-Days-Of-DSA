#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> findSubsets(vector<int>& nums) {
    vector<vector<int>> subsets;
    int n = nums.size();
    int subsetCount = 1 << n; // 2^n subsets

    for (int i = 0; i < subsetCount; i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) subset.push_back(nums[j]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main() {
    vector<int> set = {1, 2};
    vector<vector<int>> subsets = findSubsets(set);

    cout << "Subsets: ";
    for (const auto& subset : subsets) {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++) {
            cout << subset[i] << (i + 1 < subset.size() ? ", " : "");
        }
        cout << "] ";
    }
    cout << endl;

    return 0;
}
