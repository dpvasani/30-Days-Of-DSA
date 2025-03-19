#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 4

void insertWithShift(int arr[ROWS][COLS], int &rowCount, int &colCount, int insertRow, int insertCol, int value) {
    if (rowCount * colCount >= ROWS * COLS) {
        cout << "Array is full!" << endl;
        return;
    }
    
    if (insertRow >= rowCount || insertCol >= colCount || insertRow < 0 || insertCol < 0) {
        cout << "Invalid Position!" << endl;
        return;
    }

    // Flatten 2D index to 1D
    int totalElements = rowCount * colCount;
    int insertPos = insertRow * colCount + insertCol;

    // Shift elements to the right
    for (int i = totalElements; i > insertPos; i--) {
        arr[i / colCount][i % colCount] = arr[(i - 1) / colCount][(i - 1) % colCount];
    }

    // Insert new value
    arr[insertRow][insertCol] = value;

    // Update row and column count if needed
    if (colCount < COLS) {
        colCount++;
    } else if (rowCount < ROWS) {
        rowCount++;
    }
}

void print2DArray(int arr[ROWS][COLS], int rowCount, int colCount) {
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rowCount = 3, colCount = 4;

    cout << "Original 2D Array:\n";
    print2DArray(arr, rowCount, colCount);

    insertWithShift(arr, rowCount, colCount, 1, 2, 99); // Insert at (1,2)
    cout << "\nAfter Insertion at (1,2) with Shifting:\n";
    print2DArray(arr, rowCount, colCount);

    insertWithShift(arr, rowCount, colCount, 0, 0, 88); // Insert at (0,0)
    cout << "\nAfter Insertion at (0,0) with Shifting:\n";
    print2DArray(arr, rowCount, colCount);

    return 0;
}
