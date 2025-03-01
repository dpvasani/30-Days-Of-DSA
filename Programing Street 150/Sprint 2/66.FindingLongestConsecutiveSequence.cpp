#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int longestConsecutiveSequence(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        if (!numSet.count(num - 1)) {
            int currentNum = num, streak = 1;
            while (numSet.count(currentNum + 1)) {
                currentNum++;
                streak++;
            }
            longest = max(longest, streak);
        }
    }

    return longest;
}

int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest consecutive sequence length: " << longestConsecutiveSequence(arr) << endl;
    return 0;
}
