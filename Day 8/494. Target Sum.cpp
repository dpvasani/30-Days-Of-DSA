class Solution {
public:
  int findTargetSumWays(vector<int> &nums, int target) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);

    // If the target is out of the possible range, return 0
    if (abs(target) > totalSum)
      return 0;
    if ((totalSum + target) % 2 != 0)
      return 0;

    int sum = (totalSum + target) / 2;

    vector<int> dp(sum + 1, 0);
    dp[0] = 1;

    for (int num : nums) {
      for (int j = sum; j >= num; --j) {
        dp[j] += dp[j - num];
      }
    }

    return dp[sum];
  }
};
