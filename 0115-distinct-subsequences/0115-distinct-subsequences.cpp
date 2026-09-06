class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.length(), n = t.length();
        // Using unsigned long long to prevent potential overflow during intermediate additions,
        // though the problem states the answer fits in a 32-bit signed integer.
        std::vector<unsigned long long> dp(n + 1, 0);
        
        // Base case: empty t can be formed 1 way
        dp[0] = 1;
        
        for (int i = 1; i <= m; ++i) {
            // Traverse backwards to use values from the previous row only
            for (int j = n; j >= 1; --j) {
                if (s[i - 1] == t[j - 1]) {
                    dp[j] += dp[j - 1];
                }
            }
        }
        
        return dp[n];
    }
};