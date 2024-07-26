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
      v.push_back(candidates[i]);
      combinationSumHelper(candidates, target - candidates[i], v, ans, i);
      // Backtracking
      v.pop_back();
    }
  }

  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    // 39. Combination Sum
    // Pick and Drop Strategy
    vector<vector<int>> ans;
    vector<int> v;
    combinationSumHelper(candidates, target, v, ans, 0);
    return ans;
  }
};

// Other Solutions Beats 100%

void solve(vector<int> &candidates, vector<vector<int>> &result,
           vector<int> &elements, int sum, int target, int start) {
  if (sum == target) {
    result.push_back(elements);
    return;
  }

  for (int i = start; i < candidates.size(); ++i) {
    if (sum + candidates[i] > target) // early termination, since the next
                                      // indices will always be larger
      return;

    elements.push_back(candidates[i]);
    solve(candidates, result, elements, sum + candidates[i], target, i);
    elements.pop_back();
  }
}

class Solution {
public:
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {

    sort(candidates.begin(), candidates.end()); // the array isn't always sorted
    vector<vector<int>> result;
    vector<int> elements;
    solve(candidates, result, elements, 0, target, 0);
    return result;
  }
};