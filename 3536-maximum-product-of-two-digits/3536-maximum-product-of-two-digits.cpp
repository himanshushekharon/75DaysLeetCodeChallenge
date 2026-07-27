class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
        while(n!=0){
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        int pod=1;
        sort(v.begin(),v.end());
        int x=v.size();
        return v[x-1]*v[x-2];

    }
};