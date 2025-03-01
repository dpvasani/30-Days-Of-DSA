#include <iostream>
using namespace std;

void printNumberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

int main() {
    int n = 4;
    printNumberTriangle(n);
    return 0;
}
