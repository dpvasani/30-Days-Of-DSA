#include <iostream>
using namespace std;

void printNumberTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << num++;
        cout << endl;
    }
}

int main() {
    int n = 4;
    printNumberTriangle(n);
    return 0;
}
