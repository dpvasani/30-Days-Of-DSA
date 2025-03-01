#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<pair<int, int>> findPairs(vector<int> &arr, int target) {
    unordered_set<int> seen;
    vector<pair<int, int>> result;

    for (int num : arr) {
        int complement = target - num;
        if (seen.count(complement)) {
            result.push_back({complement, num});
        }
        seen.insert(num);
    }

    return result;
}

int main() {
    int n, target;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int &num : arr) {
        cin >> num;
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<pair<int, int>> pairs = findPairs(arr, target);

    cout << "Pairs that sum up to " << target << " are: ";
    for (const auto &p : pairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
