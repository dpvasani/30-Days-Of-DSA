#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> perfectSquaresInRange(int start, int end) {
    vector<int> perfectSquares;
    for (int i = ceil(sqrt(start)); i * i <= end; i++) {
        perfectSquares.push_back(i * i);
    }
    return perfectSquares;
}

int main() {
    int start, end;
    cout << "Enter start and end of range: ";
    cin >> start >> end;

    vector<int> squares = perfectSquaresInRange(start, end);
    
    cout << "Perfect squares: ";
    for (int sq : squares) {
        cout << sq << " ";
    }
    cout << endl;

    return 0;
}
