#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondSmallest(const vector<int>& arr) {
    int first = INT_MAX, second = INT_MAX;
    for (int num : arr) {
        if (num < first) {
            second = first;
            first = num;
        } else if (num < second && num != first) {
            second = num;
        }
    }
    return second == INT_MAX ? -1 : second;
}

int main() {
    vector<int> arr = {12, 13, 1, 10, 34, 1};
    cout << "The second smallest number is " << findSecondSmallest(arr) << endl;
    return 0;
}
