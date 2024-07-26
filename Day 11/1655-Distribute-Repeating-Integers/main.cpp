#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  bool canDistributeHelper(vector<int> &counts, vector<int> &quantity,
                           int ithCustomer) {
    // Base Condition
    if (ithCustomer == quantity.size()) {
      return true;
    }

    for (int i = 0; i < counts.size(); i++) {
      if (counts[i] >= quantity[ithCustomer]) {
        counts[i] -= quantity[ithCustomer];
        if (canDistributeHelper(counts, quantity, ithCustomer + 1)) {
          return true;
        }
        // Backtracking
        counts[i] += quantity[ithCustomer];
      }
    }
    return false;
  }

  bool canDistribute(vector<int> &nums, vector<int> &quantity) {
    // 1655. Distribute Repeating Integers
    // https://leetcode.com/problems/distribute-repeating-integers/
    unordered_map<int, int> countMap;
    for (int num : nums) {
      countMap[num]++;
    }
    vector<int> counts;
    for (auto it : countMap) {
      counts.push_back(it.second);
    }
    // Sort quantity in decreasing order
    sort(quantity.rbegin(), quantity.rend());
    return canDistributeHelper(counts, quantity, 0);
  }
};