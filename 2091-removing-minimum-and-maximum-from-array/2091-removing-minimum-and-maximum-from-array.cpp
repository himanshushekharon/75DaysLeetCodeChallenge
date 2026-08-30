class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN,mn=INT_MAX;
        for(int i:nums){
            mx=max(mx,i);
            mn=min(mn,i);
        }
        int a=1,b=1;
        for(int i:nums){
            if(mx==i){
                break;
            }
            a++;
        }
        for(int i:nums){
            if(mn==i){
                break;
            }
            b++;
        }
        int cntf=max(a,b);
        int x=1,y=1;
        for(int i=n-1;i>=0;i--){
            if(mx==nums[i]) break;
            x++;
        }
        for(int i=n-1;i>=0;i--){
            if(mn==nums[i]) break;
            y++;
        }
        int cntb=max(x,y);
        int u=a+y;
        int v=x+b;
        int cntfb=min(u,v);
        int ans=min(min(cntf,cntb),cntfb);
        return ans;


    }
};