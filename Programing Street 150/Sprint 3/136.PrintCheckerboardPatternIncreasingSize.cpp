#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ((i + j) % 2 == 0 ? "X" : "O");
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printCheckerboard(n);
    return 0;
}
