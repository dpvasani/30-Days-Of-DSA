class Solution {
public:
  int findPivot(vector<int> &arr) {
    int s = 0;
    int e = arr.size() - 1;

    while (s < e) {
      int mid = s + (e - s) / 2;

      if (mid < e && arr[mid] > arr[mid + 1]) {
        return mid;
      }
      if (mid > s && arr[mid - 1] > arr[mid]) {
        return mid - 1;
      }

      if (arr[s] <= arr[mid]) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return s;
  }

  int binarySearch(vector<int> &arr, int s, int e, int target) {
    while (s <= e) {
      int mid = s + (e - s) / 2;

      if (arr[mid] == target) {
        return mid;
      } else if (arr[mid] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return -1;
  }

  int search(vector<int> &nums, int target) {
    int pivotIndex = findPivot(nums);

    if (nums[pivotIndex] == target) {
      return pivotIndex;
    }

    if (pivotIndex == 0) {
      return binarySearch(nums, 0, nums.size() - 1, target);
    }

    if (target >= nums[0] && target <= nums[pivotIndex - 1]) {
      return binarySearch(nums, 0, pivotIndex - 1, target);
    } else {
      return binarySearch(nums, pivotIndex, nums.size() - 1, target);
    }
  }
};
