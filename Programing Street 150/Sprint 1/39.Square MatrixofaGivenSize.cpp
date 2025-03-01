#include <iostream>
using namespace std;


void generateMatrix(int size) {
    int matrix[size][size]; 
    int num = 1;


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = num++;
        }
    }

    // Display the matrix
    cout << "Generated " << size << "x" << size << " Matrix:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size! Please enter a positive integer." << endl;
    } else {
        generateMatrix(size);
    }

    return 0;
}
