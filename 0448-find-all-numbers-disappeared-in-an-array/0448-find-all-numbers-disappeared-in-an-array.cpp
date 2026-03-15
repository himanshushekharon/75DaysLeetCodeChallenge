class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>s;
        for(int i:nums){
            s.insert(i);
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(!s.count(i+1)){
                v.push_back(i+1);
            }
        }
        
        return v;
    }
};