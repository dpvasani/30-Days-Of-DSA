#include <iostream>
#include <vector>
using namespace std;


int sumOfDiagonals(vector<vector<int>>& matrix) {
    int sum = 0, n = matrix.size();

    for (int i = 0; i < n; i++) {
        // Primary diagonal
        sum += matrix[i][i]; 
        if (i != n - i - 1) {
             // Secondary diagonal (avoid double counting center element)
            sum += matrix[i][n - i - 1];
        }
    }

    return sum;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Sum of diagonal elements: " << sumOfDiagonals(matrix) << endl;
    return 0;
}
