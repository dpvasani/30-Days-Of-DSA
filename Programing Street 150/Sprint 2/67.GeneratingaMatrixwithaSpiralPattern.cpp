#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> generateSpiralMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size, 0));
    int top = 0, bottom = size - 1, left = 0, right = size - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Move right
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;

        // Move down
        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;

        // Move left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) matrix[bottom][i] = num++;
            bottom--;
        }

        // Move up
        if (left <= right) {
            for (int i = bottom; i >= top; i--) matrix[i][left] = num++;
            left++;
        }
    }

    return matrix;
}

int main() {
    int size;
    cout << "Enter matrix size: ";
    cin >> size;

    vector<vector<int>> matrix = generateSpiralMatrix(size);
    
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
