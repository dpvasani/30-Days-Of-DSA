class Solution {
public:
  void solve(vector<int> &candidates, vector<vector<int>> &ans,
             vector<int> &temp, int target, int index) {

    if (target == 0) {
      ans.push_back(temp);
      return;
    }
    if (target < 0) {
      return;
    }
    if (index >= candidates.size()) {
      return;
    }

    // include
    temp.push_back(candidates[index]);
    solve(candidates, ans, temp, target - candidates[index], index + 1);
    temp.pop_back(); // backtracking
    while (index < candidates.size() - 1 &&
           candidates[index] == candidates[index + 1])
      index++;
    solve(candidates, ans, temp, target, index + 1);
  }
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> temp;
    solve(candidates, ans, temp, target, 0);
    return ans;
  }
};

// Sum I -> Sum II
class Solution {
public:
  void combinationSumHelper(vector<int> &candidates, int target, vector<int> &v,
                            vector<vector<int>> &ans, int index) {
    // Base Condition
    if (target == 0) {
      ans.push_back(v);
      return;
    }
    if (target < 0) {
      return;
    }
    for (int i = index; i < candidates.size(); i++) {
      if (i > index && candidates[i] == candidates[i - 1])
        continue; // skip duplicates
      v.push_back(candidates[i]);
      combinationSumHelper(candidates, target - candidates[i], v, ans,
                           i + 1); // move to next index
      // Backtracking
      v.pop_back();
    }
  }

  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> v;
    combinationSumHelper(candidates, target, v, ans, 0);
    return ans;
  }
};
