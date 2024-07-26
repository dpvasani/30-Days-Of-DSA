class Solution {
public:
  vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    dfs(n, 0, vector<bool>(n), vector<bool>(2 * n - 1), vector<bool>(2 * n - 1),
        vector<string>(n, string(n, '.')), ans);
    return ans;
  }

private:
  void dfs(int n, int i, vector<bool> &&cols, vector<bool> &&diag1,
           vector<bool> &&diag2, vector<string> &&board,
           vector<vector<string>> &ans) {
    if (i == n) {
      ans.push_back(board);
      return;
    }

    for (int j = 0; j < n; ++j) {
      if (cols[j] || diag1[i + j] || diag2[j - i + n - 1])
        continue;
      board[i][j] = 'Q';
      cols[j] = diag1[i + j] = diag2[j - i + n - 1] = true;
      dfs(n, i + 1, move(cols), move(diag1), move(diag2), move(board), ans);
      cols[j] = diag1[i + j] = diag2[j - i + n - 1] = false;
      board[i][j] = '.';
    }
  }
};

class Solution {
public:
  vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> result;
    vector<string> board(n, string(n, '.'));

    // Clear maps for new instance of solveNQueens
    rowCheck.clear();
    upperLeftDiagonalCheck.clear();
    bottomLeftDiagonalCheck.clear();

    solve(board, 0, n, result);
    return result;
  }

private:
  // Global maps to keep track of rows and diagonals
  unordered_map<int, bool> rowCheck;
  unordered_map<int, bool> upperLeftDiagonalCheck;
  unordered_map<int, bool> bottomLeftDiagonalCheck;

  bool isSafe(int row, int col, int n) {
    // Optimization using maps to check if the position is safe
    if (rowCheck[row] || upperLeftDiagonalCheck[n - 1 + col - row] ||
        bottomLeftDiagonalCheck[row + col]) {
      return false;
    }

    // If no queen is found in any of the checked paths
    return true;
  }

  void solve(vector<string> &board, int col, int n,
             vector<vector<string>> &result) {
    // Base Case
    if (col >= n) {
      result.push_back(board);
      return;
    }

    // 1 case solve karo Baki Recursion Sambhal Lenga
    for (int row = 0; row < n; row++) {
      if (isSafe(row, col, n)) {
        // Rakh Do ->  1 -> Queen
        board[row][col] = 'Q';
        rowCheck[row] = true;
        upperLeftDiagonalCheck[n - 1 + col - row] = true;
        bottomLeftDiagonalCheck[row + col] = true;

        // Recursion Sambhal Lenga
        solve(board, col + 1, n, result);

        // Backtracking -> 0 -> No Queen
        board[row][col] = '.';
        rowCheck[row] = false;
        upperLeftDiagonalCheck[n - 1 + col - row] = false;
        bottomLeftDiagonalCheck[row + col] = false;
      }
    }
  }
};