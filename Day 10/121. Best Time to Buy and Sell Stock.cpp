class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int min = 1000000;
    int max = 0;
    int mini(0);
    for (int i = 0; i < prices.size(); i++) {
      max = ((prices[i] - min > max && i > mini) ? prices[i] - min : max);
      if (min > prices[i]) {
        mini = i;
        min = prices[i];
      }
    }
    return max;
  }
};

class Solution {
public:
  // TC -> O(n)
  // SC -> O(n)
  void maxProfitFinder(vector<int> &prices, int i, int &minPrice,
                       int &maxProfit) {
    // Base case: if i reaches the end of prices array
    if (i == prices.size()) {
      return;
    }

    // Solve for one case
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    }

    int todayProfit = prices[i] - minPrice;
    if (todayProfit > maxProfit) {
      maxProfit = todayProfit;
    }

    // Recursive call to process the next day
    maxProfitFinder(prices, i + 1, minPrice, maxProfit);
  }

  int maxProfit(vector<int> &prices) {
    // Initialize variables
    int minPrice = INT_MAX;
    int maxProfit = 0; // Initialize maxProfit to 0, not INT_MIN

    // Call recursive function to find maximum profit
    maxProfitFinder(prices, 0, minPrice, maxProfit);

    return maxProfit;
  }
};
