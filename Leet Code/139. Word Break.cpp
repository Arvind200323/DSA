class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> set(wordDict.begin(),wordDict.end());
        bool dp[s.length()+1];
        memset(dp,false,sizeof(dp));
        dp[0] = true; 
        for(int i=0;i<=s.length();i++){
            for(int j=0;j<i;j++){
                if(dp[j] && set.find(s.substr(j, i-j)) != set.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.length()];
    }
};
