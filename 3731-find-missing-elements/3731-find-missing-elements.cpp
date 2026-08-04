class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;
        int se=nums[0],le=nums[n-1];
        int i=0;
        while(se<=le){
            if (i < n && nums[i] == se) {
                i++;
            } else {
                v.push_back(se);
            }
            se++;
        }
        return v;
    }
};