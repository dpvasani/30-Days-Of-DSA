#include <iostream>
using namespace std;

void printInvertedTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < n - i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 5;
    printInvertedTriangle(n);
    return 0;
}
