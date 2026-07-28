class Solution {
public:
    string smallestPalindrome(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        vector<char> chars;
        for (auto& pair : mp) {
            chars.push_back(pair.first);
        }
        sort(chars.begin(), chars.end());
        string first_half = "";
        char odd_char = '\0';
        
        for (char c : chars) {
            int count = mp[c];
            first_half.append(count / 2, c);
            if (count % 2 != 0) {
                odd_char = c;
            }
        }
        string second_half = first_half;
        reverse(second_half.begin(), second_half.end());
        
        if (odd_char != '\0') {
            return first_half + odd_char + second_half;
        } else {
            return first_half + second_half;
        }
    }
};