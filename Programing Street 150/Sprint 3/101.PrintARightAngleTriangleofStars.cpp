#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 4;
    printTriangle(n);
    return 0;
}
