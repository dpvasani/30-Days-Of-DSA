#include <iostream>
using namespace std;

void printMatrix(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printMatrix(n);
    return 0;
}
