#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  cout << "2 - D Array" << endl;
  // Matrix Are 2 D Array
  // int arr [Number Of Row][Number Of Column];
  // In Memory My Data will be in format of 1 D array
  // We can Only visualize for our comfortability in grid format
  // In Memory My Data will be in format of 1 D array
  // int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  // Stored In 1 D Array In Memory And 1 D Array Size Is 9

  // Declaration -> int arr[2][2];
  // Initialization -> int arr[2][2] = {{1,2},{3,4}};

  // Accesing Of Elements
  // arr [row index][col index]
  //       col 0 col 1 col 2
  // row 0  1     2     3
  // row 1  4     5     6
  // row 2  7     8     9
  // Mapping is done through Map
  // Liniear_Index = C*I+J
  // R = Number Of Row
  // C = Number Of Column
  // I = Row Index
  // J = Column Index
  // int arr[2][2] = {{1,2},{3,4}};
  // array look like
  // 1 2
  // 3 4

  // Insert In 2 D Array
  // int arr[m][n];
  // m*n Elements
  // index m col 0 to m - 1 and n row 0 to n - 1
  // cin>>arr[i][j]; -> Input
  // cout<<arr[i][j]; -> Output

  // 2 D Array In Function -> Passed By Reference

  // Row Wise Access
  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // Col Wise Access
  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     cout << arr[j][i] << " ";
  //   }
  //   cout << endl;
  // }

  // vector of int
  // line  every block has one block of int
  // 1
  // 2
  // 3
  // 4
  // 5
  // 6
  // 7
  // vector of vector
  // every block has one vector - Just Like 2D Array
  // 1 2 3
  // 4 5 6
  // 7 8 9
  // vector<vector<int>> arr;
  // outer<inner<data type> >name(row,col);
  // inner vector push data is = int type
  // outer vector data = vector push hoga

  // vector<vector<int>> arr;
  // vector<int> a{1, 2, 3};
  // vector<int> b{4, 5, 6};
  // vector<int> c{7, 8, 9};

  // arr.push_back(a);
  // arr.push_back(b);
  // arr.push_back(c);

  // for (int i = 0; i < arr.size(); i++) {
  //   for (int j = 0; j < arr[i].size(); j++) {
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  int row = 3;
  int col = 5;
  vector<vector<int>> arrr(row, vector<int>(col, 0));
  // Row -> Size of outer vector or number of rows
  // col -> Size of inner vector or number of columns

  for (int i = 0; i < arrr.size(); i++) {
    for (int j = 0; j < arrr[i].size(); j++) {
      cout << arrr[i][j] << " ";
    }
    cout << endl;
  }
  // Home Work
  cout << "2 D Vector 5 Row 5 Col With -8" << endl;
  vector<vector<int>> arrrr(5, vector<int>(5, -8));
  for (int i = 0; i < arrrr.size(); i++) {
    for (int j = 0; j < arrrr[i].size(); j++) {
      cout << arrrr[i][j] << " ";
    }
    cout << endl;
  }

  // Printing cout <<arrr [2][3]<<endl;
  // Insertion cin >> arrr[2][3];
  // Number or row -> arrr.size()
  // Number of col -> arrr[i].size()

  // Important Thing
  // function(arr[][500], int row, int col)
  // actually arr is here is int (*)[500] (array of pointer) not a 2d arraay
  // second 500 feild not leave empty if you dont know put large size any
  return 0;
}