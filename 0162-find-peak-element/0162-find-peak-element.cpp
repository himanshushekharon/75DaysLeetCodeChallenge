class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            bool ch=(i==0) || nums[i]>=nums[i-1];
            bool ce=(i==n-1) || nums[i]>=nums[i+1];
            if(ch && ce)
                return i;
        }
        return -1;
    }
};