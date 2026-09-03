class Solution {
public:
    bool uniformArray(vector<int>& num1) {
        int sod=INT_MAX;
        for(int i:num1){
            if(i%2!=0){
                sod=min(sod,i);
            }
        }
        bool cheven=true,chodd=true;
        for(int i:num1){
            if(i%2==1 && i<=sod){
                cheven=false;
            }
            if(i%2==0 && i<=sod){
                chodd=false;
            }
        }
        if(cheven || chodd){
            return true;
        }
        return false;
        
    }
};