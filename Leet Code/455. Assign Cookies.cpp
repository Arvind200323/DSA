class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int max = 0;
        int p = s.size()-1;
        int q = g.size()-1;
        while(p>=0 && q>=0){
            if(s[p]>=g[q]){
                max++;
                p--;
                q--;
            }
            else q--;
        }
        return max;
    }
};
