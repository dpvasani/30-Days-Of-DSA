class Solution {
public:
  int maxProfit(vector<int> &prices) {
    vector<int> profits;
    profits.push_back(0);
    int n = prices.size();
    for (int i = 1; i < n; i++) {
      profits.push_back(prices[i] - prices[i - 1]);
    }
    int sum = 0;
    for (int i = 0; i < profits.size(); i++) {
      if (profits[i] >= 0) {
        sum += profits[i];
      }
    }
    return sum;
  }
};