#include <iostream>
using namespace std;

void printStarPattern(int n) {
    for (int i = 1; i <= n * 2; i += 2) {
        for (int j = 0; j < i; j++)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 3;
    printStarPattern(n);
    return 0;
}
