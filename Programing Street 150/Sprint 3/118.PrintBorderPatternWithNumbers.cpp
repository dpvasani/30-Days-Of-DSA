#include <iostream>
using namespace std;

void printBorderPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                cout << j + 1;
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printBorderPattern(n);
    return 0;
}
