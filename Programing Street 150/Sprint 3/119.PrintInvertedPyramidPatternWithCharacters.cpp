#include <iostream>
using namespace std;

void printInvertedPyramid(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << (char)('A' + i - 1);
        cout << endl;
    }
}

int main() {
    int n = 3;
    printInvertedPyramid(n);
    return 0;
}
