class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++){
            p.push_back({nums[i],i});
        }
        sort(p.begin(),p.end());
        int l=0;
        int r=p.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(p[mid].first==target){
                return p[mid].second;
            }else if(p[mid].first>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
};