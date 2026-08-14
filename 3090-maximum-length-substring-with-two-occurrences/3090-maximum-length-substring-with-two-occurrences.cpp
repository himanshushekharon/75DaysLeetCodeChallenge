class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char, int> count;
        int left = 0, max_len = 0;

        for (int right = 0; right < n; right++) {
            count[s[right]]++; // Expand the window to the right

            // If the character frequency exceeds 2, shrink window from the left
            while (count[s[right]] > 2) {
                count[s[left]]--;
                left++;
            }

            // Calculate the maximum valid length found so far
            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};