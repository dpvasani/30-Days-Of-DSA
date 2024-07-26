class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;  // Start at the main folder (depth 0)

        for (const string& log : logs) {
            if (log == "../") {
                depth = max(depth - 1, 0);  // Avoid going below main folder
            } else if (log != "./") {
                depth++;  // Increment for child directories
            }
        }

        return depth;
    }
};
