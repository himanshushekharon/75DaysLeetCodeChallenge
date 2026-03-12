class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        int start=0;
        int end=n-1;
        sort(v.begin(),v.end());
        while(start<=end){
            int currsum=v[start].first+v[end].first;
            if(currsum==target){
                return {v[start].second,v[end].second};
            }else if(currsum>target){
                end--;
            }else{
                start++;
            }
        }
        
        return{};
    }
};