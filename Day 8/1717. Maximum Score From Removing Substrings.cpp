class Solution {
public:
  int maximumGain(string s, int x, int y) {
    int total = 0;

    int ac = 0;
    int bc = 0;

    for (char ch : s) {
      if (ch != 'a' && ch != 'b') {
        total += min(ac, bc) * min(x, y);
        ac = 0;
        bc = 0;
        continue;
      }

      if (x > y && ac > 0) {
        if (ch == 'b') {
          ac -= 1;
          total += x;
        } else {
          ac += 1;
        }
      } else if (y > x && bc > 0) {
        if (ch == 'a') {
          bc -= 1;
          total += y;
        } else {
          bc += 1;
        }
      } else {
        if (ch == 'a') {
          ac += 1;
        } else {
          bc += 1;
        }
      }
    }

    total += min(ac, bc) * min(x, y);
    return total;
  }
};
