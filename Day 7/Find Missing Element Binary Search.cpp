#include <iostream>
#include <vector>
using namespace std;

int findMissingElement(vector<int> &v) {
  int s = 0;
  int e = v.size() - 1;
  int start = v[0];

  while (s <= e) {
    int m = s + (e - s) / 2;

    // Check if the difference between value and index is the same
    if (v[m] == start + m) {
      // No discrepancy in left part, search in right part
      s = m + 1;
    } else {
      // Discrepancy found, search in left part
      e = m - 1;
    }
  }

  // Missing element is at index `s`, and should be start + s
  return start + s;
}

int main() {
  // We Can SOlve Through Sum Or Linear Search
  vector<int> v{1, 2, 3, 4, 6, 7, 8, 9}; // 5 is missing
  int missingElement = findMissingElement(v);
  cout << "The missing element is: " << missingElement << endl;
  return 0;
}
