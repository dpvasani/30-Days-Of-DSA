#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Many 0s and 1s are present in the array
  // Sort them using two-pointer approach
  int start = 0;
  int end = 15; // Correct size of the array - 1
  vector<int> arr{0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1};
  while (start <= end) {
    if (arr[start] == 0) {
      start++;
    } else {
      swap(arr[start], arr[end]);
      end--;
    }
  }

  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
