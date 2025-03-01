#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomMatrix(int rows, int cols) {
    srand(time(0));
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (auto& row : matrix)
        for (auto& num : row)
            num = rand() % 10;

    for (const auto& row : matrix) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
}

int main() {
    int rows = 2, cols = 3;
    generateRandomMatrix(rows, cols);
    return 0;
}
