#include <iostream>
using namespace std;

void printStarPattern(int n) {
    for (int i = 1; i <= n; i += 2) {
        cout << string((n - i) / 2, ' ') << string(i, '*') << endl;
    }
    for (int i = n - 2; i > 0; i -= 2) {
        cout << string((n - i) / 2, ' ') << string(i, '*') << endl;
    }
}

int main() {
    int n = 5;
    printStarPattern(n);
    return 0;
}
