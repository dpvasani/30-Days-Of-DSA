#include <iostream>
using namespace std;

void printPascalsTriangle(int n) {
    int arr[n][n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printPascalsTriangle(n);
    return 0;
}
