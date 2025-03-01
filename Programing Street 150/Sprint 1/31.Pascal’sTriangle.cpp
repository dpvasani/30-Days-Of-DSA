#include <bits/stdc++.h>
using namespace std;

void generatePascalsTriangle(int rows) {
    vector<vector<int>> pascal(rows);

    for (int i = 0; i < rows; i++) {
        // Set first and last elements to 1
        pascal[i].resize(i + 1, 1); 

        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    for (const auto &row : pascal) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;
    generatePascalsTriangle(rows);
    return 0;
}
