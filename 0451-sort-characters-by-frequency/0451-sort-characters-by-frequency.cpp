class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>feq;
        for(char c:s){
            feq[c]++;
        }
        vector<pair<int,char>>v;
        for(auto [a,b]:feq){
            v.push_back({b,a});
        }
        sort(v.rbegin(),v.rend());
        string ans="";
        for(auto a:v){
            ans+=string(a.first,a.second);
        }
        return ans;
    }
};