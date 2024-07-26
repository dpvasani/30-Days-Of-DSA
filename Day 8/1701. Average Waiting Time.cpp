class Solution {
public:
  double averageWaitingTime(vector<vector<int>> &customers) {
    long long currentTime = 0;
    long long totalWaitingTime = 0;

    for (const auto &customer : customers) {
      int arrival = customer[0];
      int prepTime = customer[1];

      if (currentTime < arrival) {
        currentTime = arrival;
      }
      currentTime += prepTime;
      totalWaitingTime += (currentTime - arrival);
    }

    return static_cast<double>(totalWaitingTime) / customers.size();
  }
};
