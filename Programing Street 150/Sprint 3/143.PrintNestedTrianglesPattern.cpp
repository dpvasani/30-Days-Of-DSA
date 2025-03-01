#include <iostream>
using namespace std;

void printNestedTriangles(int n) {
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }
}

int main() {
    int n = 3;
    printNestedTriangles(n);
    return 0;
}
