class Solution {
public:
  void permutationUniqueHelper(vector<int> &nums, int start,
                               vector<vector<int>> &ans) {
    // Base Case
    if (start == nums.size()) {
      ans.push_back(nums);
      return;
    }
    // Use a set to track elements we have already used at this position to
    // avoid duplicates
    unordered_set<int> used;
    for (int i = start; i < nums.size(); i++) {
      if (used.find(nums[i]) != used.end())
        continue; // skip duplicates
      used.insert(nums[i]);
      swap(nums[start], nums[i]);
      permutationUniqueHelper(nums, start + 1, ans);
      swap(nums[start], nums[i]); // backtrack
    }
  }

  vector<vector<int>> permuteUnique(vector<int> &nums) {
    sort(nums.begin(), nums.end()); // sorting to ensure duplicates are adjacent
    vector<vector<int>> ans;
    permutationUniqueHelper(nums, 0, ans);
    return ans;
  }
};

//  Fastest Solution
class Solution {
public:
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    if (nums.size() == 1)
      return {nums};
    int fact = 1;
    for (int i = nums.size(); i >= 0; i--) {
      if (i == 1) {
        break;
      }
      fact = fact * i;
    }
    vector<vector<int>> vp;
    vector<int> v = nums;
    vp.push_back(nums);
    int temp1, temp2;
    while (fact > 1) {
      for (int i = nums.size() - 1; i > 0; i--) {
        if (nums[i] > nums[i - 1]) {
          temp1 = i - 1;
          break;
        }
        temp1 = 0;
      }
      for (int j = nums.size() - 1; j >= 0; j--) {
        if (nums[j] > nums[temp1]) {
          temp2 = j;
          break;
        }
        temp2 = 0;
      }
      if (temp1 == 0 && temp2 == 0) {
        reverse(nums.begin(), nums.end());
      } else {
        swap(nums[temp1], nums[temp2]);
        reverse(nums.begin() + temp1 + 1, nums.end());
      }
      if (nums == v)
        break;
      vp.push_back(nums);
      --fact;
    }
    return vp;
  }
};