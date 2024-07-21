class Solution {
public:
  // Recursive helper function with memoization
  int numSquareHelper(int n, unordered_map<int, int> &memo) {
    // Base case: if n is 0, no squares are needed
    if (n == 0) {
      return 0;
    }

    // If result is already computed, return it
    if (memo.count(n)) {
      return memo[n];
    }

    // Initialize the answer to a large value
    int ans = INT_MAX;

    // Try all perfect squares less than or equal to n
    for (int i = 1; i * i <= n; ++i) {
      int perfectSquare = i * i;
      ans = min(ans, 1 + numSquareHelper(n - perfectSquare, memo));
    }

    // Store the result in memoization map
    memo[n] = ans;

    return ans;
  }

  class Solution {
  public:
    int numSquares(int n) {
      // Memoization array to store the minimum number of perfect squares for
      // each number up to n
      std::vector<int> dp(n + 1, INT_MAX);
      dp[0] = 0; // Base case: 0 can be represented by 0 perfect squares

      // Iterate through all numbers from 1 to n
      for (int i = 1; i <= n; ++i) {
        // Check all perfect squares less than or equal to i
        for (int j = 1; j * j <= i; ++j) {
          dp[i] = std::min(dp[i], dp[i - j * j] + 1);
        }
      }
      return dp[n];
    }
  };

  class Solution {
  public:
    // TC -> O(n^n)
    // SC -> O(n)
    int numSquareHelper(int n) {
      // Base case
      if (n == 0)
        return 0;
      if (n < 0)
        return INT_MAX; // Return a large value to indicate an invalid case

      int ans = INT_MAX;
      int i = 1;
      int end = sqrt(n);

      while (i <= end) {
        int perfectSquare = i * i;
        int numberOfPerfectSquares = 1 + numSquareHelper(n - perfectSquare);
        if (numberOfPerfectSquares < ans) {
          ans = numberOfPerfectSquares;
        }
        ++i;
      }

      return ans;
    }

    int numSquares(int n) { return numSquareHelper(n); }
  };