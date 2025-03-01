#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 3;
    printPyramid(n);
    return 0;
}
