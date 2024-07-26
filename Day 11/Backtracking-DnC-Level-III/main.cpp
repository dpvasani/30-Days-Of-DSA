#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int row, int col, int maze[][4],
            vector<vector<bool>> &visited) {
  if ((i >= 0 && i < row) && (j >= 0 && j < col) && (maze[i][j] == 1) &&
      (visited[i][j] == false)) {

    // 3 Condition Checked At Here
    // 1. If i,j is valid -> Inside Bound
    // 2. If i,j ==  1 -> Movement Ia Allowed
    // 3. If i,j is Not Visited -> Not Visited Before == False
    return true;
  } else {
    return false;
  }
}

void solveMaze(int maze[4][4], int row, int col, int i, int j,
               vector<vector<bool>> &visited, vector<string> &path,
               string output) {
  // Base Case
  if (i == row - 1 && j == col - 1) {
    // Answer Found
    path.push_back(output);
    return;
  }

  // Down -> i+1, j
  if (isSafe(i + 1, j, row, col, maze, visited)) {
    visited[i + 1][j] = true;
    solveMaze(maze, row, col, i + 1, j, visited, path, output + 'D');
    // Backtrack
    visited[i + 1][j] = false;
  }

  // Left -> i, j-1
  if (isSafe(i, j - 1, row, col, maze, visited)) {
    visited[i][j - 1] = true;
    solveMaze(maze, row, col, i, j - 1, visited, path, output + 'L');
    // Backtrack
    visited[i][j - 1] = false;
  }

  // Right -> i, j+1
  if (isSafe(i, j + 1, row, col, maze, visited)) {
    visited[i][j + 1] = true;
    solveMaze(maze, row, col, i, j + 1, visited, path, output + 'R');
    // Backtrack
    visited[i][j + 1] = false;
  }

  // Up -> i-1, j
  if (isSafe(i - 1, j, row, col, maze, visited)) {
    visited[i - 1][j] = true;
    solveMaze(maze, row, col, i - 1, j, visited, path, output + 'U');
    // Backtrack
    visited[i - 1][j] = false;
  }
}

int main() {
  // Backtracking DnC Level III
  // Rat In A Maze
  // Rat in a Maze

  // Consider a rat placed at (0, 0) in a square matrix of order N * N. It has
  // to reach the destination at (N - 1, N - 1). Find all possible paths that
  // the rat can take to reach from source to destination. The directions in
  // which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right).
  // Value 0 at a cell in the matrix represents that it is blocked and the rat
  // cannot move to it while value 1 at a cell in the matrix represents that rat
  // can travel through it.

  // Down -> (i + 1, j)
  // Left -> (i, j - 1)
  // Right -> (i, j + 1)
  // Up -> (i - 1, j)

  // TC -> O(4^(m*n))
  // SC -> O(m*n)
  // Passing By References So We Dont Need To Return Value We Are Storing Answer
  // In Actual String

  int maze[4][4] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 0}};
  int row = 4;
  int col = 4;
  vector<vector<bool>> visited(row, vector<bool>(col, false));

  if (maze[0][0] == 0) {
    cout << "No Path Exists" << endl;
    return 0;
  }

  // Src Ki Value True Mark Kar Dete He
  visited[0][0] = true;
  vector<string> path;
  string output = "";
  solveMaze(maze, row, col, 0, 0, visited, path, output);

  if (path.size() == 0) {
    cout << "No Path Exists" << endl;
    return 0;
  }

  cout << "Printing the results " << endl;
  for (auto i : path) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
