#include <iostream>
using namespace std;

void printDiamondMatrix(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        cout << string(n - i, ' ');
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = i - 1; j >= 1; j--) cout << j;
        cout << endl;
    }
}

int main() {
    int n = 3;
    printDiamondMatrix(n);
    return 0;
}
