#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int row, int col, int key) {
  int s = 0;
  int e = row * col - 1;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    int rowIndex = mid / col;
    int colIndex = mid % col;
    if (arr[rowIndex][colIndex] == key) {
      cout << "Found at " << rowIndex << " " << colIndex << endl;
      cout << "arr"
           << "[" << rowIndex << "]"
           << "[" << colIndex << "]"
           << " : " << arr[rowIndex][colIndex] << endl;
      return true;
    } else if (arr[rowIndex][colIndex] < key) {
      // Right search
      s = mid + 1;
    } else {
      // Left search
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return false;
}

int main() {

  // Binary Search In 2 D Array
  // s = 0 and e = n*m - 1;
  // Row = n
  // Col = m
  // RowIndex = i = m/cols Its Multiplied So For Reverse Divide
  // ColIndex = j = m%cols Its Plus So For Revrse Mod
  // arr[i][j] = c*i + j;
  // arr[n][m] = c*n + m; c = number of col
  // Search Space Strategy => Ans Store And FInd Nearest Number One That More
  // Closer
  int key = 19;
  int arr[5][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16},
                   {17, 18, 19, 20}};
  int row = 5;
  int col = 4;
  bool ans2D = binarySearch(arr, row, col, key);
  if (ans2D) {
    cout << "Found" << endl;
  } else {
    cout << "Not Found" << endl;
  }
  return 0;
}
