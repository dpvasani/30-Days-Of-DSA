#include <iostream>
using namespace std;

void printSpiralDiagonals(int n) {
    int matrix[n][n], num = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            matrix[i - j][j] = num++;

    for (int i = 1; i < n; i++)
        for (int j = i; j < n; j++)
            matrix[n - (j - i) - 1][j] = num++;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printSpiralDiagonals(n);
    return 0;
}
