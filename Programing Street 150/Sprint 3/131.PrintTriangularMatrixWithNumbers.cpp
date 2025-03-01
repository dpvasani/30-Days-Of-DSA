#include <iostream>
using namespace std;

void printTriangularMatrix(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printTriangularMatrix(n);
    return 0;
}
