class Solution {
public:
  const int mod = (int)pow(10, 9) + 7;
  int solve(int dice, int faces, int tar) {
    if (tar < 0)
      return 0;
    if (dice == 0 && tar != 0) {
      return 0;
    }
    if (tar == 0 && dice != 0)
      return 0;
    if (dice == 0 && tar == 0)
      return 1;

    int ans = 0;
    for (int i = 1; i < faces; i++) {
      ans = ans + solve(dice - 1, faces, tar - 1);
    }
    return ans % mod;
  }
  int solveMem(int n, int k, int target, vector<vector<int>> &dp) {
    if (n == 0 && target == 0)
      return 1;
    if (n <= 0 || target <= 0)
      return 0;
    if (dp[n][target] != -1)
      return dp[n][target];
    int ans = 0;
    for (int i = 1; i <= k; i++) {
      ans += solveMem(n - 1, k, target - i, dp);
      ans %= mod;
    }
    return dp[n][target] = ans;
  }

  int numRollsToTarget(int n, int k, int target) {
    if (target < n || target > (n * k))
      return 0;
    vector<vector<int>> dp(31, vector<int>(1001, -1));
    return solveMem(n, k, target, dp);
  }
};

// Recursion Solution
class Solution {
public:
  int numRollsToTarget(int n, int k, int target) {
    // dp is best for this
    // Through Recursion TLE is high
    // Base Condition 1
    // n = 0
    // k = 2
    // t = 3 -> Return 0
    // Base Contion 2
    // n = 0
    // t = 0 -> Return 1
    // Base Condition 3
    // n != 0
    // t = 0 -> Return 0
    // t < 0 -> Return 0
    // Time Complexity: O(k^n)

    // Space Complexity: O(n)

    // Base Condition
    if (n == 0 && target == 0) {
      return 1;
    }
    if (n == 0 && target != 0) {
      return 0;
    }
    if (n != 0 && target == 0) {
      return 0;
    }
    if (n != 0 && target < 0) {
      return 0;
    }
    // Recursion
    // One Case Solved
    int ans = 0;
    for (int i = 1; i <= k; i++) {
      ans = ans + numRollsToTarget(n - 1, k, target - i);
    }
    return ans;
  }
};