#include <iostream>
using namespace std;

void printDiamond(int size) {
    // Upper part of the diamond
    for (int i = 1; i <= size; i += 2) {
        for (int j = 0; j < (size - i) / 2; ++j)
            cout << " ";
        for (int j = 0; j < i; ++j)
            cout << "*";
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = size - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (size - i) / 2; ++j)
            cout << " ";
        for (int j = 0; j < i; ++j)
            cout << "*";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the diamond: ";
    cin >> size;

    if (size % 2 == 0) {
        cout << "Please enter an odd number for a symmetric diamond." << endl;
    } else {
        printDiamond(size);
    }

    return 0;
}
