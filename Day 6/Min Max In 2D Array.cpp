#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

void findMax(int **arr, int row, int col) {
    int maxVal = INT_MIN; // Initialize maxVal to smallest possible integer
    int maxRow, maxCol; // Variables to store indices of the maximum value

    // Iterate through the array to find the maximum value
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Print the maximum value and its indices
    cout << "Maximum value: " << maxVal << " at index (" << maxRow << ", " << maxCol << ")" << endl;
}

void findMin(int **arr, int row, int col) {
    int minVal = INT_MAX; // Initialize minVal to largest possible integer
    int minRow, minCol; // Variables to store indices of the minimum value

    // Iterate through the array to find the minimum value
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // Print the minimum value and its indices
    cout << "Minimum value: " << minVal << " at index (" << minRow << ", " << minCol << ")" << endl;
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

    // Row-wise input
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    // Print the array
    cout << "Array Is: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Call the functions to find the maximum and minimum values
    findMax(arr, row, col);
    findMin(arr, row, col);

    // Free dynamically allocated memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
