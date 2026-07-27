class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int ind=0,mx=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                ind=i;
            }
        mx=max(mx,nums[i]);
        }
        int mx1=INT_MIN;
        for(int i=0;i<n;i++){
            
            if(i!=ind){
                mx1=max(mx1,nums[i]);
            }
        }
        return (mx-1)*(mx1-1);
        
    }
};