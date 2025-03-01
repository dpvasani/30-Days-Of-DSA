#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomSquareMatrix(int size) {
    srand(time(0));
    vector<vector<int>> matrix(size, vector<int>(size));
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
    int size = 3;
    generateRandomSquareMatrix(size);
    return 0;
}
