class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int i=1;
        while(true){
            int x=k*i;
            if(!mp.count(x)){
                ans= x;
                break;
            }
            i++;
        }
        return ans;
    }
};