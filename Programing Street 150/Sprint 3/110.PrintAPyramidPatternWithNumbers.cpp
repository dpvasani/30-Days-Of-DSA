#include <iostream>
using namespace std;

void printNumberPyramid(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << num++;
        num--;
        for (int j = 1; j < i; j++)
            cout << --num;
        cout << endl;
        num = 1;
    }
}

int main() {
    int n = 3;
    printNumberPyramid(n);
    return 0;
}
