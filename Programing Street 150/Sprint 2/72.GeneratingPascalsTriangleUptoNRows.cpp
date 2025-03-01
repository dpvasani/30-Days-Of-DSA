#include <iostream>
#include <vector>
using namespace std;

void generatePascalsTriangle(int N) {
    vector<vector<int>> triangle(N);
    for (int i = 0; i < N; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    for (const auto& row : triangle) {
        for (int num : row)
            cout << num << " ";
        cout << endl;
    }
}

int main() {
    int N = 3;
    generatePascalsTriangle(N);
    return 0;
}
