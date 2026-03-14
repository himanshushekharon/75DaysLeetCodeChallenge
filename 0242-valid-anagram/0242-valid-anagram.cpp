class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int j=0;
        if(s.size()!=t.size()) return false;
        bool check=true;
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[j]){
                check=false;
                break;
            }
            j++;
        }
        return check;
    }
};