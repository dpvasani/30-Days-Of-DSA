class Solution {
public:
  vector<int> sortJumbled(vector<int> &mapping, vector<int> &nums) {
    int n = nums.size();

    int pval = 1;

    for (int j = 0; j < 9; j++) {
      vector<int> freq(10, 0), pointer(10, 0);
      for (int i = 0; i < n; i++) {
        int auxi = (nums[i] / pval) % 10;
        if (pval != 1 && nums[i] / pval == 0)
          freq[0]++;
        else
          freq[mapping[auxi]]++;
      }
      int sum = 0;
      for (int i = 0; i < 10; i++) {
        pointer[i] = sum;
        sum += freq[i];
      }

      vector<int> temp(n);

      for (int i = 0; i < n; i++) {
        int auxi = (nums[i] / pval) % 10;
        if (pval != 1 && nums[i] / pval == 0)
          temp[pointer[0]++] = nums[i];
        else
          temp[pointer[mapping[auxi]]++] = nums[i];
      }

      nums = temp;

      pval *= 10;
    }

    return nums;
  }
};