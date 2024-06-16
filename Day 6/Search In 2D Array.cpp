#include <iostream>
using namespace std;

void findKey(int **arr, int row, int col, int key) {
  bool found = false;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == key) {
        cout << "Key " << key << " found at index " << i << "," << j << endl;
        found = true;
      }
    }
  }
  if (!found) {
    cout << "Key " << key << " not found" << endl;
  }
}

int main() {
  int key;
  cout << "Enter the number of key: ";
  cin >> key;
  cout << endl;
  int row, col;
  cout << "Enter the number of rows: ";
  cin >> row;
  cout << endl;
  cout << "Enter the number of columns: ";
  cin >> col;
  cout << endl;

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

  // Call the function to find the key
  findKey(arr, row, col, key);

  // Free dynamically allocated memory
  for (int i = 0; i < row; i++) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
