class Solution {
public:
  // Two Pointer Method
  // TC -> O(n-k)
  // Shrinking Of Array
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    int l = 0;
    int h = arr.size() - 1;
    while (h - l >= k) {
      if (x - arr[l] > arr[h] - x) {
        l++;
      } else {
        h--;
      }
    }
    vector<int> ans;
    for (int i = l; i <= h; i++) {
      ans.push_back(arr[i]);
    }
    // Return vector<int>(arr.begin()+l,arr.begin()+h+1);
    return ans;
  }
};

// Expanding Method

class Solution {
public:
  // Two Pointer Method
  // TC -> O(n-k)
  // Shrinking Of Array
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    // Binary Search Method
    // Lower Bound
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--) {
      if (l < 0 || (h < arr.size() && abs(arr[l] - x) > abs(arr[h] - x))) {
        h++;
      } else {
        l--;
      }
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
  }

  // Lower Bound Function
  int lowerBound(vector<int> &arr, int x) {
    int left = 0;
    int right = arr.size();
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (arr[mid] < x) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left;
  }
};
