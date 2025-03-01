#include <iostream>
#include <vector>
using namespace std;

int findLongestConsecutiveOnes(const vector<int>& arr) {
    int maxCount = 0, count = 0;
    for (int num : arr) {
        if (num == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    cout << "The longest sequence of consecutive 1s is " << findLongestConsecutiveOnes(arr) << endl;
    return 0;
}
