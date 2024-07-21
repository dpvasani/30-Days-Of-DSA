class Solution {
public:
  static bool cmp(string a, string b) {
    // Comparator to decide the order based on concatenated result
    // T1 = a + b
    // T2 = b + a
    // return T1 > T2
    // Descending Order Jo Bada Usko Return Vo Pahle Ayga
    // For Ascending  a + b < b + a
    return a + b > b + a;
  }

  string largestNumber(vector<int> &nums) {
    // Given a list of non-negative integers nums, arrange them such that they
    // form the largest number and return it.

    // Since the result may be very large, you need to return a string
    // instead of an integer.
    vector<string> snums;
    for (auto n : nums) {
      snums.push_back(to_string(n));
    }

    // Sort using the custom comparator
    sort(snums.begin(), snums.end(), cmp);

    // Handle the edge case where all numbers are zero
    if (snums[0] == "0") {
      return "0";
    }

    // Concatenate sorted numbers into the final result
    string result;
    for (auto s : snums) {
      result += s;
    }

    return result;
  }
};
