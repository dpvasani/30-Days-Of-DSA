#include <iostream>
using namespace std;

void printCrossPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printCrossPattern(n);
    return 0;
}
