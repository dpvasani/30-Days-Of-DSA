#include <iostream>
using namespace std;

void printDiagonalPattern(int n) {
    for (int i = 0; i < n; i++) {
        cout << (char)('A' + i);
        if (i > 0) cout << string(2 * i - 1, ' ') << (char)('A' + i);
        cout << endl;
    }
}

int main() {
    int n = 4;
    printDiagonalPattern(n);
    return 0;
}
