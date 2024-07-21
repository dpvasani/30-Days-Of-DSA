class Solution {
public:
  int robHelper(vector<int> &nums, int i) {
    // Base Case
    if (i >= nums.size()) {
      return 0;
    }
    // One Case Solved
    int robAmt1 = nums[i] + robHelper(nums, i + 2);
    int robAmt2 = robHelper(nums, i + 1);
    return max(robAmt1, robAmt2);
  }
  int rob(vector<int> &nums) {
    // You are a professional robber planning to rob houses along a street. Each
    // house has a certain amount of money stashed, the only constraint stopping
    // you from robbing each of them is that adjacent houses have security
    // systems connected and it will automatically contact the police if two
    // adjacent houses were broken into on the same night.

    // Given an integer array nums representing the amount of money of each
    // house, return the maximum amount of money you can rob tonight without
    // alerting the police.
    // Include Exclude Pattern
    // TC -> O(2^n)
    // SP -> O(n)
    return robHelper(nums, 0);
  }
};