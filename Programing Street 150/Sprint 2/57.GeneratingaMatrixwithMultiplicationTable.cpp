#include <iostream>
using namespace std;

void generateMultiplicationMatrix(int size) {
    for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size; ++j) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    generateMultiplicationMatrix(size);
    return 0;
}
