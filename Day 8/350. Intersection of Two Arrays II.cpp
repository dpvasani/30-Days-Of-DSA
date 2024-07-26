class Solution {
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> count_map;
    vector<int> intersection;

    // Count the occurrences of each element in nums1
    for (int num : nums1) {
      count_map[num]++;
    }

    // Iterate through nums2 and check for common elements
    for (int num : nums2) {
      if (count_map[num] > 0) {
        intersection.push_back(num);
        count_map[num]--;
      }
    }

    return intersection;
  }
};