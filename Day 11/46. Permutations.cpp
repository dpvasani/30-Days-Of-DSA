class Solution {
public:
  // STL
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> v;
    sort(nums.begin(), nums.end());
    do {
      v.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
    return v;
  }
};

// Backtracking
class Solution {
private
  void swap(int[] arr, int i, int s) {
    int temp = arr[i];
    arr[i] = arr[s];
    arr[s] = temp;
  }

private
  void permuter(int[] arr, int i, List<List<Integer>> ans) {
    if (i == arr.length - 1) {
      List<Integer> temp = new ArrayList<>();
      for (int n : arr) {
        temp.add(n);
      }
      ans.add(temp);
      return;
    }

    for (int s = i; s < arr.length; s++) {
      swap(arr, i, s);
      permuter(arr, i + 1, ans);
      swap(arr, i, s);
    }
  }

public
  List<List<Integer>> permute(int[] nums) {
    List<List<Integer>> ans = new ArrayList<>();
    permuter(nums, 0, ans);
    return ans;
  }
}