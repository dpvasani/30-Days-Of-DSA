class Solution {
public:
  string reverseParentheses(string s) {

    string ans = "";

    while (true) {
      bool flag = 0;
      size_t found = s.find(")");
      if (found == string::npos)
        return s;

      string temp = "";
      s.erase(found, 1);
      int i = found - 1;
      for (; s[i] != '('; i--) {
        temp += s[i];
      }

      s.erase(i, 1);
      int k = 0;
      while (i < found - 1) {
        s[i++] = temp[k++];
      }
    }
    return s;
  }
};