#include <iostream>
using namespace std;

void transpose(int **arr, int row, int col, int **transposeArr) {
  // Dynamically allocate memory for the transpose matrix
  for (int i = 0; i < col; ++i) {
    transposeArr[i] = new int[row];
  }

  // For Solving Questions Dry Run Is Must ->  More Dry Run -> More Accurate And
  // More Phisable Solution -> Better Approach

  // Loop through the rows and columns of the original matrix
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      // Assign the element at the current position of the original matrix
      // to the corresponding position in the transpose matrix
      // Same Array Traspose -> 2 time swarp is happening in this case of i<row
      // and j<col -> so not working swap(arr[i][j], arr[j][i]);
      transposeArr[j][i] = arr[i][j];
    }
  }
}

int main() {
  int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;
  cout << "Enter the number of columns: ";
  cin >> col;

  // Dynamically allocate memory for the original matrix
  int **arr = new int *[row];
  for (int i = 0; i < row; ++i) {
    arr[i] = new int[col];
  }

  // Dynamically allocate memory for the transpose matrix
  int **transposeArr = new int *[col];

  // Input elements of the original matrix
  cout << "Enter the elements of the original matrix:" << endl;
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      cin >> arr[i][j];
    }
  }

  // Call the transpose function
  transpose(arr, row, col, transposeArr);

  // Output the transpose matrix
  cout << "Transpose of the matrix:" << endl;
  for (int i = 0; i < col; ++i) {
    for (int j = 0; j < row; ++j) {
      cout << transposeArr[i][j] << " ";
    }
    cout << endl;
  }

  // Free dynamically allocated memory for both matrices
  for (int i = 0; i < row; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  for (int i = 0; i < col; ++i) {
    delete[] transposeArr[i];
  }
  delete[] transposeArr;

  return 0;
}
