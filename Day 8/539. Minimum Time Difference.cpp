class Solution {
public:
  int findMinDifference(vector<string> &timePoints) {
    // Given a list of 24-hour clock time points in "HH:MM" format, return the
    // minimum minutes difference between any two time-points in the list.
    // Step 1 : Convert Time String In To Minutes Integer Value
    // Step 2 : Sort The Array To Reduce Number Of Comparisons
    // Step 3 : Comparing Adjustant Element For Difference
    // Step 4 : Min Difference

    // Time Complexity:
    // The time complexity of the findMinDifference function can be analyzed as
    // follows:

    // Conversion of time points to minutes:

    // This involves iterating over the timePoints vector and converting each
    // time point to minutes. The complexity of this step is 𝑂(𝑛), where 𝑛
    // is the number of time poin Sorting the minutes vector:

    // Sorting the vector of minutes takes
    // 𝑂(𝑛log𝑛)
    // Calculating the differences:

    // Calculating the differences between consecutive time points involves a
    // single pass through the minutes vector, which takes 𝑂(𝑛) time.
    // Calculating the circular difference:
    // This step is 𝑂(1) since it involves only a few operations.
    // Therefore, the overall time complexity is dominated by the sorting step,
    // resulting in a time complexity of 𝑂(𝑛log

    // Space Complexity:
    // The space complexity of the findMinDifference function can be analyzed as
    // follows:

    // Storage for the minutes vector:
    // We use an additional vector minutes to store the converted time points in
    // minutes. This requires 𝑂(𝑛)
    // Sorting in-place:
    // The sorting is done in-place, so no additional space is required for
    // sorting beyond the minutes vector. Temporary variables: A few extra
    // variables are used for storing intermediate results (e.g., minDifference,
    // circularDifference), but these require 𝑂(1 Therefore, the overall spac
    // complexity is 𝑂(𝑛) due to the additional minutes vector..

    // Summary:
    // Time Complexity
    // 𝑂(𝑛log𝑛)
    // Space Complexity
    // 𝑂(n)

    vector<int> minutes;
    for (auto &time : timePoints) {
      int hour = stoi(time.substr(0, 2));
      int minute = stoi(time.substr(3, 2));
      minutes.push_back(hour * 60 + minute);
    }

    sort(minutes.begin(), minutes.end());

    int minDifference = INT_MAX;
    for (size_t i = 1; i < minutes.size(); ++i) {
      minDifference = min(minDifference, minutes[i] - minutes[i - 1]);
    }

    // Handle the circular nature of the clock
    int circularDifference = 1440 + minutes[0] - minutes.back();
    minDifference = min(minDifference, circularDifference);

    return minDifference;
  }
};