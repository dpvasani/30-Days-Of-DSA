#include <iostream>
#include <vector>
using namespace std;

void generateMatrix(int size) {
    vector<vector<int>> matrix(size, vector<int>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = (i + j) % 2;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size = 3;
    generateMatrix(size);
    return 0;
}
