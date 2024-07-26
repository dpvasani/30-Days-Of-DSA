class Solution {
public:
  bool isSafe(int i, int j, int row, int col, vector<vector<int>> &maze,
              vector<vector<bool>> &visited) {
    return (i >= 0 && i < row) && (j >= 0 && j < col) && (maze[i][j] == 1) &&
           (!visited[i][j]);
  }

  void solveMaze(vector<vector<int>> &maze, int row, int col, int i, int j,
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

  vector<string> findPath(vector<vector<int>> &maze) {
    int row = maze.size();
    int col = maze[0].size();
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    vector<string> path;

    if (maze[0][0] == 0) {
      return path; // No Path Exists
    }

    visited[0][0] = true;
    solveMaze(maze, row, col, 0, 0, visited, path, "");

    return path;
  }
};