#include <iostream>
#include <unordered_map>
using namespace std;

int findMode(int arr[], int size) {
    unordered_map<int, int> freq;
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
    
    int mode = arr[0], maxCount = 0;
    for (auto &pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }
    return mode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Mode: " << findMode(arr, size) << endl;
    return 0;
}
