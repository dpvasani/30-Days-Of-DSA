#include <iostream>
#include <vector>
using namespace std;

vector<int> findLargestInRows(vector<vector<int>>& matrix) {
    vector<int> result;
    for (const auto& row : matrix)
        result.push_back(*max_element(row.begin(), row.end()));
    return result;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> largest = findLargestInRows(matrix);
    for (int num : largest) cout << num << " ";
    cout << endl;
    return 0;
}
