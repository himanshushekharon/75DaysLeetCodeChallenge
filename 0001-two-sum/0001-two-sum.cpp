class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.count(x)){
                return{mp[x],i};
            }
            mp[nums[i]]=i;
        }return {-1,-1};
    }
};