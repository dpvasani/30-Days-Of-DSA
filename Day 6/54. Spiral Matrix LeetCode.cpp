#include <iostream>
#include <vector>
using namespace std;

void spiralPrint(vector<vector<int>> v) {
  int m = v.size();          // Rows
  int n = v[0].size();       // Cols
  int totalElements = m * n; // Total elements in the matrix

  int startingRow = 0;   // Starting Row
  int endingCol = n - 1; // Ending Col
  int endingRow = m - 1; // Ending Row
  int startingCol = 0;   // Starting Col
  int count = 0;         // Counter for the elements printed

  while (count < totalElements) {
    // Printing Starting Row
    for (int i = startingCol; i <= endingCol && count < totalElements; i++) {
      cout << v[startingRow][i] << " ";
      count++;
    }
    startingRow++; // Starting Row++

    // Printing Ending Column
    for (int i = startingRow; i <= endingRow && count < totalElements; i++) {
      cout << v[i][endingCol] << " ";
      count++;
    }
    endingCol--; // Ending Col--

    // Printing Ending Row
    for (int i = endingCol; i >= startingCol && count < totalElements; i--) {
      cout << v[endingRow][i] << " ";
      count++;
    }
    endingRow--; // Ending Row--

    // Printing Starting Column
    for (int i = endingRow; i >= startingRow && count < totalElements; i--) {
      cout << v[i][startingCol] << " ";
      count++;
    }
    startingCol++; // Starting Col++
  }
}

int main() {
  // Wave Print Of Matrix
  // Even Top To Bottom
  // Odd Bottom To Top

  vector<vector<int>> v{
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  spiralPrint(v);

  return 0;
}
