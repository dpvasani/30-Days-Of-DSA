#include <iostream>
using namespace std;

void printRowSum(int **arr, int row, int col) {
  // You Can Only Leave First Bound Empty -> Bool findKey(int arr[][3], int
  // rows, int]) ->  3 is value of col is required in c*i+j -> So C value is
  // must required All Other Bracket Value is Must Row Sum -> Row Wise Traversal
  for (int i = 0; i < row; i++) {
    int sum = 0;
    for (int j = 0; j < col; j++) {
      sum = sum + arr[i][j];
    }
    cout << "Sum of row " << i + 1 << ": " << sum << endl;
  }
}

int main() {
  int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;
  cout << "Enter the number of columns: ";
  cin >> col;

  // Dynamically allocate memory for the 2D array
  int **arr = new int *[row];
  for (int i = 0; i < row; i++) {
    arr[i] = new int[col];
  }

  // Row Wise Input
  cout << "Enter the elements of the array:" << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  cout << endl;
  // Print Row Wise
  cout << "Array Is: " << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Call the function to print row sums
  printRowSum(arr, row, col);
  // It Must To Pass Size In Function

  // Free dynamically allocated memory
  for (int i = 0; i < row; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
