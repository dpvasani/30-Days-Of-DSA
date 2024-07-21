class Solution {
public:
  string helper(int n) {
    vector<string> units = {"One",       "Two",      "Three",   "Four",
                            "Five",      "Six",      "Seven",   "Eight",
                            "Nine",      "Ten",      "Eleven",  "Twelve",
                            "Thirteen",  "Fourteen", "Fifteen", "Sixteen",
                            "Seventeen", "Eighteen", "Nineteen"};

    vector<string> tens = {"Twenty", "Thirty",  "Forty",  "Fifty",
                           "Sixty",  "Seventy", "Eighty", "Ninety"};

    string ans = "";

    if (n / 100 > 0) {
      ans += units[n / 100 - 1] + " Hundred";
      n %= 100;

      if (n > 0) {
        ans += " ";
      }
    }

    if (n > 0 && n < 20)
      ans = ans + units[n - 1];

    else if (n >= 20) {
      ans = ans + tens[n / 10 - 2];

      if (n % 10) {
        ans += " " + units[n % 10 - 1];
      }
    }

    return ans;
  }

  string numberToWords(int num) {
    if (num == 0) {
      return "Zero";
    }

    vector<string> hundreds = {"Thousand", "Million", "Billion"};
    int count = -1;
    string ans = "";

    while (num > 0) {
      string curr = helper(num % 1000);

      if (!curr.empty()) {
        if (!ans.empty()) {
          ans = curr + " " + (count >= 0 ? hundreds[count] + " " : "") + ans;
        } else {
          ans = curr + (count >= 0 ? " " + hundreds[count] : "") + ans;
        }
      }

      count++;
      num = num / 1000;
    }

    return ans;
  }
};
// Recursion
// Step 1: 123456
// Step 2: Number Kis Se Just Greater Than He? num>1000 it -> {1000, Thousand}
// Step 3: a = 123456/1000 -> 123 -> Word Me Convert Karna -> One Recursive Call
// Step 4: b = Thousand
// Step 5: c = 123456 % 1000 -> 456 -> Convert In To Words -> One Recursive Call
// Step 6: 123 Thousand 456
// Step 7: 1(a)One Hundred(b) 23(c)
// Step 8: it -> 20 b = twenty c = three a = "" -> One Hundred Twenty Three
// Thousand Step 9: 4(a) Hundred(b) 56(c) Step 10: Four Hundred 56 Step 11: 56
// -> a -> "" b -> Fifty c -> Six -> Four Hundred Fifty Six Step 12: a + b + c
// ->  One Hundred Tweenty Three(a) Thousand(b) Four Hundred Fifty Six(c)
class Solution {
public:
  vector<pair<int, string>> mp = {{1000000000, "Billion"},
                                  {1000000, "Million"},
                                  {1000, "Thousand"},
                                  {100, "Hundred"},
                                  {90, "Ninety"},
                                  {80, "Eighty"},
                                  {70, "Seventy"},
                                  {60, "Sixty"},
                                  {50, "Fifty"},
                                  {40, "Forty"},
                                  {30, "Thirty"},
                                  {20, "Twenty"},
                                  {19, "Nineteen"},
                                  {18, "Eighteen"},
                                  {17, "Seventeen"},
                                  {16, "Sixteen"},
                                  {15, "Fifteen"},
                                  {14, "Fourteen"},
                                  {13, "Thirteen"},
                                  {12, "Twelve"},
                                  {11, "Eleven"},
                                  {10, "Ten"},
                                  {9, "Nine"},
                                  {8, "Eight"},
                                  {7, "Seven"},
                                  {6, "Six"},
                                  {5, "Five"},
                                  {4, "Four"},
                                  {3, "Three"},
                                  {2, "Two"},
                                  {1, "One"}};
  string numberToWords(int num) {
    if (num == 0) {
      return "Zero";
    }

    for (auto it : mp) {
      if (num >= it.first) {
        string a = "";
        if (num >= 100) {
          a = numberToWords(num / it.first) + " ";
        }
        string b = it.second;
        string c = "";
        if (num % it.first != 0) {
          c = " " + numberToWords(num % it.first);
        }
        return a + b + c;
      }
    }
    return "";
  }
};

// Recursion Method
class Solution {
public:
  // Vector of pairs where each pair consists of a number and its corresponding
  // word representation
  vector<pair<int, string>> mp = {{1000000000, "Billion"},
                                  {1000000, "Million"},
                                  {1000, "Thousand"},
                                  {100, "Hundred"},
                                  {90, "Ninety"},
                                  {80, "Eighty"},
                                  {70, "Seventy"},
                                  {60, "Sixty"},
                                  {50, "Fifty"},
                                  {40, "Forty"},
                                  {30, "Thirty"},
                                  {20, "Twenty"},
                                  {19, "Nineteen"},
                                  {18, "Eighteen"},
                                  {17, "Seventeen"},
                                  {16, "Sixteen"},
                                  {15, "Fifteen"},
                                  {14, "Fourteen"},
                                  {13, "Thirteen"},
                                  {12, "Twelve"},
                                  {11, "Eleven"},
                                  {10, "Ten"},
                                  {9, "Nine"},
                                  {8, "Eight"},
                                  {7, "Seven"},
                                  {6, "Six"},
                                  {5, "Five"},
                                  {4, "Four"},
                                  {3, "Three"},
                                  {2, "Two"},
                                  {1, "One"}};

  string numberToWords(int num) {
    // Step 1: Base Case - if the number is zero, return "Zero"
    if (num == 0) {
      return "Zero";
    }

    // Iterate through the vector of pairs to find the largest denomination
    for (auto it : mp) {
      if (num >= it.first) {
        string a = "";
        // If the number is 100 or more, recursively process the quotient
        if (num >= 100) {
          a = numberToWords(num / it.first) + " ";
        }
        string b =
            it.second; // The word representation of the current denomination
        string c = "";
        // If there is a remainder, recursively process the remainder
        if (num % it.first != 0) {
          c = " " + numberToWords(num % it.first);
        }
        return a + b + c; // Combine and return the result
      }
    }
    return ""; // Fallback return statement
  }
};

// Recursion Method
class Solution {
public:
  vector<pair<int, string>> mp = {{1000000000, "Billion"},
                                  {1000000, "Million"},
                                  {1000, "Thousand"},
                                  {100, "Hundred"},
                                  {90, "Ninety"},
                                  {80, "Eighty"},
                                  {70, "Seventy"},
                                  {60, "Sixty"},
                                  {50, "Fifty"},
                                  {40, "Forty"},
                                  {30, "Thirty"},
                                  {20, "Twenty"},
                                  {19, "Nineteen"},
                                  {18, "Eighteen"},
                                  {17, "Seventeen"},
                                  {16, "Sixteen"},
                                  {15, "Fifteen"},
                                  {14, "Fourteen"},
                                  {13, "Thirteen"},
                                  {12, "Twelve"},
                                  {11, "Eleven"},
                                  {10, "Ten"},
                                  {9, "Nine"},
                                  {8, "Eight"},
                                  {7, "Seven"},
                                  {6, "Six"},
                                  {5, "Five"},
                                  {4, "Four"},
                                  {3, "Three"},
                                  {2, "Two"},
                                  {1, "One"}};

  string numberToWords(int num) {
    if (num == 0) {
      return "Zero";
    }
    for (auto it : mp) {
      if (num >= it.first) {
        string a = "";
        if (num >= 100) {
          a = numberToWords(num / it.first) + " ";
        }
        string b = it.second;
        string c = "";
        if (num % it.first != 0) {
          c = " " + numberToWords(num % it.first);
        }
        return a + b + c;
      }
    }
    return "";
  }
};
