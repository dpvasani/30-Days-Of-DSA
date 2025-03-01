#include <iostream>
using namespace std;

void printZigzagMatrix(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) cout << num++ << " ";
        } else {
            num += n - 1;
            for (int j = 0; j < n; j++) cout << num-- << " ";
            num += n + 1;
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    printZigzagMatrix(n);
    return 0;
}
