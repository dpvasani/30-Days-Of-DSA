#include <iostream>
using namespace std;

void generateTable(int start, int end) {
    for (int i = 1; i <= 10; ++i) {
        for (int j = start; j <= end; ++j) {
            cout << j << " x " << i << " = " << j * i << "\t";
        }
        cout << endl;
    }
}

int main() {
    int start, end;
    cout << "Enter start and end of range: ";
    cin >> start >> end;
    
    generateTable(start, end);
    return 0;
}
