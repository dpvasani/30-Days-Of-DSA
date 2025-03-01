#include <iostream>
using namespace std;

void printAlternatingPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << ((i + j) % 2);
        cout << endl;
    }
}

int main() {
    int n = 4;
    printAlternatingPattern(n);
    return 0;
}
