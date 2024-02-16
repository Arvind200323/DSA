class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefix(gain.size(),0);
        for(int i=0;i<gain.size();i++){
            if(i==0) prefix[i]=gain[i];
            else prefix[i]=prefix[i-1]+gain[i];
        }
        int ans=0;
        for(auto x:prefix) ans=max(x,ans);
        return ans;
    }
};
