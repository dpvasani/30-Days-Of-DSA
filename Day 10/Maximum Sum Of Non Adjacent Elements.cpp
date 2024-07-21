#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void maxSum(vector<int> &arr, int i, int sum, int &maxi) {
    // Base Case: When index i exceeds or equals the size of array
    if (i >= arr.size()) {
        // Update maxi to store the maximum sum found
        maxi = max(sum, maxi);
        return;
    }

    // Exclude current element
    maxSum(arr, i + 1, sum, maxi);

    // Include current element and skip the next element
    maxSum(arr, i + 2, sum + arr[i], maxi);
}

int main() {
    // Return The Maximum Sum Of SubSequence In Which No Two Elements Are Adjacent
    // SubSequence -> Inclusion Exclusion Type
    // One More Pattern -> House Robber Problem
    // For Include Case -> i + 2
    // Exclude Case -> i + 1

    vector<int> arr{2, 1, 4, 9};
    int i = 0;
    int sum = 0;
    int maxi = INT_MIN;

    // Call the recursive function to find maximum sum
    maxSum(arr, i, sum, maxi);

    cout << "Maximum Sum Of SubSequence Is : " << maxi << endl;

    return 0;
}
