class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    // Contiguous SubArray

    // 3 Step
    // sum = 0; max = current element (first)
    // 1. sum = sum + current element
    // 2. sum = max(sum, current element)
    // 3. if(sum < 0) sum = 0;
    int sum = 0;
    int maxi = nums[0];
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];
      maxi = max(maxi, sum);
      if (sum < 0)
        sum = 0;
    }
    return maxi;
  }
};