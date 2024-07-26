class Solution {
public:
  // Normal
  // void merge(vector<int> &v, vector<int> &temp, int start, int mid, int end)
  // {
  //   int i = start, j = mid + 1, k = start;
  //   while (i <= mid && j <= end) {
  //     if (v[i] <= v[j]) {
  //       temp[k++] = v[i++];

  //     } else {
  //       temp[k++] = v[j++];
  //     }
  //   }
  //   while (i <= mid) {
  //     temp[k++] = v[i++];
  //   }
  //   while (j <= end) {
  //     temp[k++] = v[j++];
  //   }
  //   for (int i = start; i <= end; i++){
  //     v[i] = temp[i];
  //   }
  // }

  void mergeInPlace(vector<int> &v, int start, int mid, int end) {
    // In Place
    int total_len = end - start + 1;
    int gap = total_len / 2 + total_len % 2;
    while (gap > 0) {
      int i = start;
      int j = start + gap;
      while (j <= end) {
        if (v[i] > v[j]) {
          swap(v[i], v[j]);
        }
        i++;
        j++;
      }
      gap = gap <= 1 ? 0 : gap / 2 + gap % 2;
    }
  }
  void mergeSort(vector<int> &v, int start, int end) {
    if (start >= end) {
      return;
    }
    int mid = (start + end) / 2;
    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);
    mergeInPlace(v, start, mid, end);
  }
  vector<int> sortArray(vector<int> &nums) {
    // 912. Sort an Array
    // https://leetcode.com/problems/sort-an-array/
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
  }
};