class Solution {
public:
  int maxSumArrayHelper(vector<int> &v, int start, int end) {
    if (start == end)
      return v[start];

    int mid = start + (end - start) / 2;

    int maxLeftSum = maxSumArrayHelper(v, start, mid);
    int maxRightSum = maxSumArrayHelper(v, mid + 1, end);

    // Max Cross Border Sum
    int maxLeftBorderSum = INT_MIN, leftBorderSum = 0;
    for (int i = mid; i >= start; i--) {
      leftBorderSum += v[i];
      if (leftBorderSum > maxLeftBorderSum)
        maxLeftBorderSum = leftBorderSum;
    }

    int maxRightBorderSum = INT_MIN, rightBorderSum = 0;
    for (int i = mid + 1; i <= end; i++) {
      rightBorderSum += v[i];
      if (rightBorderSum > maxRightBorderSum)
        maxRightBorderSum = rightBorderSum;
    }

    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;

    return max(maxLeftSum, max(maxRightSum, crossBorderSum));
  }

  int maxSubArray(vector<int> &nums) {
    // TC -> O(nlogn)
    // SP -> O(logn)
    return maxSumArrayHelper(nums, 0, nums.size() - 1);
  }
};

class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    // int maxsum=INT_MIN,i;
    // for(i=0;i<nums.size();i++){
    //     int sum=0;
    //     for(int j=i;j<nums.size();j++){
    //         sum+=nums[j];
    //         maxsum=max(maxsum,sum);
    //     }
    // }
    int sum = 0, maxsum = INT_MIN;
    for (auto it : nums) {
      sum += it;
      maxsum = max(sum, maxsum);
      if (sum < 0)
        sum = 0;
    }
    return maxsum;
  }
};