#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v) {
  int m = v.size();    // Row
  int n = v[0].size(); // Coloumn
  for (int startCol = 0; startCol < n; startCol++) {
    // Even Col Top to Bottom
    if (startCol % 2 == 0) {
      for (int i = 0; i < m; i++) {
        cout << v[i][startCol] << " ";
      }
    } else {
      // Odd Col Bottom to Top
      for (int i = m - 1; i >= 0; i--) {
        cout << v[i][startCol] << " ";
      }
    }
  }
}

int main() {
  // Wave Print Of Matrix
  // Even Top To Bottom
  // Odd Bottom To Top

  vector<vector<int>> v{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  wavePrintMatrix(v);

  return 0;
}