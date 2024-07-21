class Solution {
public:
  // You are climbing a staircase. It takes n steps to reach the top.

  // Each time you can either climb 1 or 2 steps. In how many distinct ways can
  // you climb to the top?

  // Example 1:

  // Input: n = 2
  // Output: 2
  // Explanation: There are two ways to climb to the top.
  // 1. 1 step + 1 step
  // 2. 2 steps
  int climbStairs(int n) {
    // Base cases: 1 step for 1 stair, 2 steps for 2 stairs
    if (n == 1) {
      return 1;
    } else if (n == 2) {
      return 2;
    }

    // DP array to store the number of ways for each number of stairs (0-based
    // indexing)
    vector<int> dp(n + 1, 0);

    // Initialize base cases in the DP array
    dp[1] = 1;
    dp[2] = 2;

    // Fill the DP array using the recurrence relation
    for (int i = 3; i <= n; i++) {
      dp[i] =
          dp[i - 1] +
          dp[i - 2]; // Ways to reach i = ways to reach i-1 + ways to reach i-2
    }

    return dp[n];
  }
};
