class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int a=0,b=0;

        for(int i:nums1){
            if(a%2==0) a++;
            else b++;
        }
        if(a>b && b!=0) return false;
        return true;
    }
};