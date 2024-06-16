#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v) {
  int m = v.size();    // Number of rows
  int n = v[0].size(); // Number of columns

  for (int i = 0; i < m; i++) {
    // Even row: left to right
    if (i % 2 == 0) {
      for (int j = 0; j < n; j++) {
        cout << v[i][j] << " ";
      }
    } else {
      // Odd row: right to left
      for (int j = n - 1; j >= 0; j--) {
        cout << v[i][j] << " ";
      }
    }
  }
}

int main() {
  // Wave print of matrix row-wise
  // Even rows: left to right
  // Odd rows: right to left

  vector<vector<int>> v{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  wavePrintMatrix(v);

  return 0;
}
