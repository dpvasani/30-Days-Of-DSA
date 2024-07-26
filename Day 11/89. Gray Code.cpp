class Solution {
public:
  vector<int> grayCode(int n) {
    vector<int> res;
    for (int i = 0; i < (1 << n); ++i) {
      int val = (i ^ (i >> 1));
      res.push_back(val);
    }
    return res;
  }
};