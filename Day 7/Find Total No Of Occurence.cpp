#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Binary Search Work On Sorted Array
  vector<int> v{1, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7};

  // First occurrence
  int indexOfFirstOccurrence = lower_bound(v.begin(), v.end(), 4) - v.begin();
  cout << "Index of first occurrence of 4 : " << indexOfFirstOccurrence << endl;

  // Last occurrence
  int indexOfLastOccurrence =
      upper_bound(v.begin(), v.end(), 4) - v.begin() - 1;
  cout << "Index of last occurrence of 4 : " << indexOfLastOccurrence << endl;

  // Total number of occurrences
  int totalNumberOfOccurrences =
      indexOfLastOccurrence - indexOfFirstOccurrence + 1;
  cout << "Total number of occurrences of 4 : " << totalNumberOfOccurrences
       << endl;

  return 0;
}
