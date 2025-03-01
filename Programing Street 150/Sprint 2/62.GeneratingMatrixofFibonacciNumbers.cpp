#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> generateFibonacciMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size));
    vector<int> fib(size * size);
    
    // Generate Fibonacci sequence
    fib[0] = 1, fib[1] = 1;
    for (int i = 2; i < size * size; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Fill the matrix row-wise
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = fib[index++];
        }
    }

    return matrix;
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    vector<vector<int>> matrix = generateFibonacciMatrix(size);
    
    for (auto row : matrix) {
        for (auto num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
