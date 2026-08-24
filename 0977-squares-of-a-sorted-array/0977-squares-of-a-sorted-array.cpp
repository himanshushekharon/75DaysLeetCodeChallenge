class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), left = 0, right = n - 1, pos = n - 1;
    vector<int> result(n);
    while (left <= right) {
        int ls = nums[left] * nums[left];
        int rs = nums[right] * nums[right];
        if (ls > rs) { result[pos--] = ls; left++; }
        else         { result[pos--] = rs; right--; }
    }
    return result;
    }
};