#include <iostream>
using namespace std;

void generatePattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

int main() {
    int rows = 3;
    generatePattern(rows);
    return 0;
}
