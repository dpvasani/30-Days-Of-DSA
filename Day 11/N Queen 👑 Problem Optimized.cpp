#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Global maps to keep track of rows and diagonals
unordered_map<int, bool> columnMap;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;

bool isSafe(int row, int col, int n) {
  if (columnMap[col] || upperLeftDiagonalCheck[n - 1 + col - row] ||
      bottomLeftDiagonalCheck[row + col]) {
    return false;
  }
  return true;
}

void printSolution(vector<vector<char>> &board, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

void solve(vector<vector<char>> &board, int col, int n) {
  // Base Case
  if (col >= n) {
    printSolution(board, n);
    return;
  }

  // 1 case solve karo Baki Recursion Sambhal Lenga
  for (int row = 0; row < n; row++) {
    if (isSafe(row, col, n)) {
      // Rakh Do ->  1 -> Queen
      board[row][col] = 'Q';
      columnMap[col] = true;
      upperLeftDiagonalCheck[n - 1 + col - row] = true;
      bottomLeftDiagonalCheck[row + col] = true;

      // Recursion Sambhal Lenga
      solve(board, col + 1, n);

      // Backtracking -> 0 -> No Queen
      board[row][col] = '-';
      columnMap[col] = false;
      upperLeftDiagonalCheck[n - 1 + col - row] = false;
      bottomLeftDiagonalCheck[row + col] = false;
    }
  }
}

int main() {
  // Queen 👑 Problem
  // N Queen Problem
  // 2 * 2 -> One Queen Placed ->  No Solution Exist
  // 3 * 3 -> Two Queen Placed ->  No Solution Exist

  int n = 4;
  if (n == 2 || n == 3) {
    cout << "No Solution Exist" << endl;
    return 0;
  }
  vector<vector<char>> board(n, vector<char>(n, '-'));
  solve(board, 0, n);
  return 0;
}
