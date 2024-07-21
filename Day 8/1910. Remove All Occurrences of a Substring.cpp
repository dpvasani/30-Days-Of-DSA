class Solution {
public:
  string removeOccurrences(string s, string part) {

    // Given two strings s and part, perform the following operation on s until
    // all occurrences of the substring part are removed:

    // Find the leftmost occurrence of the substring part and remove it from s.
    // Return s after removing all occurrences of part.
    // TC -> O(N*M)
    // A substring is a contiguous sequence of characters in a string.
    int pos = s.find(part);
    while (pos != string::npos) {
      s.erase(pos, part.length());
      pos = s.find(part);
    }
    return s;
  }
};

// With Custom Function
#include <iostream>
#include <string>

// Function to find the first occurrence of a substring
size_t custom_find(const std::string &str, const std::string &substr) {
  size_t str_len = str.length();
  size_t substr_len = substr.length();

  if (substr_len == 0)
    return 0; // Empty substring is always found at position 0
  if (substr_len > str_len)
    return std::string::npos; // Substring longer than string

  for (size_t i = 0; i <= str_len - substr_len; ++i) {
    size_t j = 0;
    for (; j < substr_len; ++j) {
      if (str[i + j] != substr[j]) {
        break;
      }
    }
    if (j == substr_len) {
      return i; // Found the substring at position i
    }
  }
  return std::string::npos; // Substring not found
}

// Function to erase a part of a string
void custom_erase(std::string &str, size_t pos, size_t len) {
  size_t str_len = str.length();
  if (pos >= str_len)
    return; // If position is out of bounds, do nothing
  if (pos + len > str_len)
    len = str_len - pos; // Adjust length if it exceeds the string

  for (size_t i = pos; i + len < str_len; ++i) {
    str[i] = str[i + len]; // Shift characters to the left
  }
  str.resize(
      str_len -
      len); // Resize the string to remove the extra characters at the end
}

int main() {
  std::string str = "Hello World";

  // Using custom find function
  std::string substr = "World";
  size_t pos = custom_find(str, substr);
  if (pos != std::string::npos) {
    std::cout << "Found '" << substr << "' at position: " << pos << std::endl;
  } else {
    std::cout << "Substring not found" << std::endl;
  }

  // Using custom erase function
  custom_erase(str, pos, substr.length());
  std::cout << "String after erasing: " << str << std::endl;

  return 0;
}
