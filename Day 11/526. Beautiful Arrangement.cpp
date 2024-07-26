class Solution {
public:
  void countArrangementHelper(vector<int> &v, int n, int &ans, int currNum) {
    if (currNum == n + 1) {
      ++ans;
      return;
    }
    for (int i = 1; i <= n; ++i) {
      if (v[i] == 0 && (currNum % i == 0 || i % currNum == 0)) {
        v[i] = currNum;
        countArrangementHelper(v, n, ans, currNum + 1);
        // Backtracking
        v[i] = 0;
      }
    }
  }

  int countArrangement(int n) {
    // 526. Beautiful Arrangement
    // M1 Bruth Force -> Find All Permutation And Check Two Condition
    // M2
    vector<int> v(n + 1, 0);
    int ans = 0;
    countArrangementHelper(v, n, ans, 1);
    return ans;
  }
};

class Solution {
public:
  int dp[16][100000];
  int solve(int i, int n, int state) {
    if (i > n) {
      return 1;
    }
    if (dp[i][state] != -1)
      return dp[i][state];
    int ans = 0;
    for (int j = 1; j <= n; j++) {
      if (((1 << j) & state) == 0 && (j % i == 0 || i % j == 0)) {
        ans += solve(i + 1, n, (state | (1 << j)));
      }
    }
    return dp[i][state] = ans;
  }
  int countArrangement(int n) {
    memset(dp, -1, sizeof(dp));
    return solve(1, n, 0);
  }
};