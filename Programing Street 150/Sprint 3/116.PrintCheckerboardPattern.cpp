#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2; j++)
            cout << ((i + j) % 2 ? "O" : "X");
        cout << endl;
    }
}

int main() {
    int n = 4;
    printCheckerboard(n);
    return 0;
}
