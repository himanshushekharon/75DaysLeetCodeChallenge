class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v;
        int fo=-1, lo=-1;
 
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                fo=mid;
                r=mid-1;
            }else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        l=0;
        r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                lo=mid;
                l=mid+1;
            }else if(nums[mid]>target){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        
        return {fo, lo};
    }
};