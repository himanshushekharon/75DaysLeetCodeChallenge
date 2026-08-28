class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int x=n;
        while(x!=0){
            int r=x%10;
            product*=r;
            sum+=r;
            x/=10;
        }
        int digit=sum+product;
        return n%digit==0 ?true:false;
    }
};