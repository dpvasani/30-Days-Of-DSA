class Solution {
public:
  bool uniqueOccurrences(vector<int> &arr) {
    // Step 1: Count occurrences of each value in the array
    unordered_map<int, int> occurrenceMap;
    for (int num : arr) {
      occurrenceMap[num]++;
    }

    // Step 2: Check if the number of occurrences are unique
    unordered_set<int> occurrenceSet;
    for (const auto &pair : occurrenceMap) {
      if (occurrenceSet.find(pair.second) != occurrenceSet.end()) {
        return false; // Duplicate occurrence count found
      }
      occurrenceSet.insert(pair.second);
    }

    return true; // All occurrence counts are unique
  }
};