#include <iostream>
#include <vector>
using namespace std;

void generateDiagonalMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size, 0));
    for (int i = 0; i < size; i++)
        for (int j = 0; j <= i; j++)
            matrix[i][j] = 1;
    
    for (const auto& row : matrix) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
}

int main() {
    int size = 4;
    generateDiagonalMatrix(size);
    return 0;
}
