#include <bits/stdc++.h>
using namespace std;

// Function to find missing numbers
vector<int> findMissingNumbers(vector<int>& nums, int n) {
    vector<bool> present(n + 1, false);
    vector<int> missing;

    // Mark present numbers
    for (int num : nums) {
        present[num] = true;
    }

    // Find missing numbers
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            missing.push_back(i);
        }
    }
    return missing;
}

int main() {
    int n;
    cin >> n;  
    vector<int> nums(n - 1);

    for (int i = 0; i < n - 1; i++) {
        // Input sequence
        cin >> nums[i];  
    }

    vector<int> missing = findMissingNumbers(nums, n);

    for (int num : missing) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
