#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
  // Check karna chahte hai ki kya current cell pr queen rakh sakte hai
  // Check in [row][col]
  // Uper Left Diagonal
  // Left Row
  // Bottom Left Diagonal
  // We Only Need To Check Only These Three Directions And We Can Say If I can
  // Place Queen Here Or Not

  // Check Row -> Left Row
  for (int j = col; j >= 0; j--) { // Corrected the loop and condition
    if (board[row][j] == 'Q') {
      return false;
    }
  }

  // Uper Left Diagonal -> [i-1][j-1]
  int i = row;
  int j = col;
  while (i >= 0 && j >= 0) {
    if (board[i][j] == 'Q') {
      return false;
    }
    i--;
    j--;
  }

  // Bottom Left Diagonal -> [i+1][j-1]
  i = row;
  j = col;
  while (i < n && j >= 0) {
    if (board[i][j] == 'Q') {
      return false;
    }
    i++;
    j--;
  }

  // Kahi Par Bhi Koi Queen Nai Mili
  // Means yeh Position Safe He
  // matlab Queen Place Kar Sakte Hai
  // return Kar do True

  // Optimization
  // Using Map We Can Reduces Time Complexity From O(n) To O(1)
  // In Map -> Insertion And Retrival Time Is O(1)
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
    if (isSafe(row, col, board, n)) {
      // Rakh Do ->  1 -> Queen
      board[row][col] = 'Q';
      // Recursion Sambhal Lenga
      solve(board, col + 1, n);
      // Backtracking -> 0 -> No Queen
      board[row][col] = '-';
    }
  }
}

int main() {
  // Queen 👑 Problem
  // N Queen Problem
  // 2 * 2 -> One Queen Placed ->  No Solution Exist
  // 3 * 3 -> Two Queen Placed ->  No Solution Exist
  // TC -> O(n!)
  // https://takeuforward.org/data-structure/n-queen-problem-return-all-distinct-solutions-to-the-n-queens-puzzle/
  int n = 2;
  if (n == 2 || n == 3) {
    cout << "No Solution Exist" << endl;
    return 0;
  }
  vector<vector<char>> board(n, vector<char>(n, '-'));
  solve(board, 0, n);
  return 0;
}
