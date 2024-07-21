#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int> v, int target) {
  // For Cpp Reference Go To cpulplus.com
  int s = 0;
  int e = v.size() - 1;
  int m = s + (e - s) / 2;
  int ans = -1;
  while (s <= e) {
    if (v[m] == target) {
      // Store Ans and then search on the right
      ans = m;
      // This Condition Is Make Different Between Last Occurrence And First
      // Occurence
      s = m + 1;
    } else if (target > v[m]) {
      // Right search
      s = m + 1;
    } else {
      // Left search
      e = m - 1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}

int main() {
  vector<int> v{1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};
  int target = 4;
  // STL Library Function
  //     int indexOfLastOccurrence =
  //         upper_bound(v.begin(), v.end(), 4) - v.begin();
  int indexOfLastOccurrence = lastOccurrence(v, target);
  cout << "Index of last occurrence of 4 : " << indexOfLastOccurrence << endl;
  return 0;
}
