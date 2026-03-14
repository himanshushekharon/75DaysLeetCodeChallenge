class Solution {
public:
    bool search(vector<int>& v, int k) {
        int n=v.size();
        int l = 0;
        int h = n - 1;
        bool check=false;
        while (l <= h) {
            int m = (h + l) / 2;
            if (v[m] == k) {
                check=true;
                break;
            }
            if (v[l] == v[m] && v[h] == v[m]) {
                l++;
                h--;
            }else if (v[l] <= v[m]) {
                if (v[l] <= k && k < v[m]) {
                    h = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                if (v[h] >= k && k > v[m]) {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            }
        }
        return check;
    }
};