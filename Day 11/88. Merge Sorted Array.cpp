class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    // Initialize pointers for nums1 and nums2
    int i = m - 1;     // Pointer for the end of the elements in nums1
    int j = n - 1;     // Pointer for the end of nums2
    int k = m + n - 1; // Pointer for the end of the merged array in nums1

    // Traverse both arrays from the end and merge them
    while (i >= 0 && j >= 0) {
      if (nums1[i] > nums2[j]) {
        nums1[k--] = nums1[i--];
      } else {
        nums1[k--] = nums2[j--];
      }
    }

    // Copy remaining elements of nums2, if any
    while (j >= 0) {
      nums1[k--] = nums2[j--];
    }
  }
};
