#include <iostream>
using namespace std;

void printCharacterPyramid(int n) {
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        cout << string(n - i, ' ');
        for (int j = 0; j < (2 * i - 1); j++) cout << ch++;
        cout << endl;
    }
}

int main() {
    int n = 3;
    printCharacterPyramid(n);
    return 0;
}
