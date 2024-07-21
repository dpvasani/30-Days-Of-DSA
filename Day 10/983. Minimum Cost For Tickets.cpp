class Solution {
public:
  // Recursive function to calculate the minimum cost
  // TC -> O(n)
  // SP -> O(n)
  int mincostTickets_helper(vector<int> &days, vector<int> &costs, int i,
                            unordered_map<int, int> &memo) {
    // Base Case: If we have considered all days, the cost is 0
    if (i >= days.size())
      return 0;

    // Check if result is already computed for this index
    if (memo.count(i))
      return memo[i];

    // Solution For One Case: Start with the current day and consider all pass
    // options One Day Pass
    int cost1 = costs[0] + mincostTickets_helper(days, costs, i + 1, memo);

    // 7 Day Pass: Move index to the day after 7 days
    int j;
    for (j = i; j < days.size() && days[j] < days[i] + 7; ++j)
      ;
    int cost7 = costs[1] + mincostTickets_helper(days, costs, j, memo);

    // 30 Days Pass: Move index to the day after 30 days
    for (j = i; j < days.size() && days[j] < days[i] + 30; ++j)
      ;
    int cost30 = costs[2] + mincostTickets_helper(days, costs, j, memo);

    // Return the minimum of the three costs
    return memo[i] = min({cost1, cost7, cost30});
  }

  int mincostTickets(vector<int> &days, vector<int> &costs) {
    // Use DP for best result
    unordered_map<int, int> memo;
    // Solve one case starting from the first day
    return mincostTickets_helper(days, costs, 0, memo);
  }
};
