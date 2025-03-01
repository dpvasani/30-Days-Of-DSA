#include <iostream>
using namespace std;

void printCharacterTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;
        for (int j = 0; j < i; j++)
            cout << ch;
        cout << endl;
    }
}

int main() {
    int n = 3;
    printCharacterTriangle(n);
    return 0;
}
