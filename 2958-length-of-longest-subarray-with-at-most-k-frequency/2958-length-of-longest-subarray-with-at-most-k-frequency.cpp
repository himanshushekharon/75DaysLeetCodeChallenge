class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int cnt=0,c=0;
        for(auto [a,b]:mp){
            if(b>=k){
                cnt++;
            }else{
                c+=b;
            }
        }
        int ans=cnt*k+c;
        return ans;
        
    }
};