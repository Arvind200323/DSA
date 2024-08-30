// class Solution {
// public:
//     int dp[1002][1002];
//     int lcs(string s1, string s2, int i, int j){
//         if(i<0 || j<0) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         if(s1[i]==s2[j]) return dp[i][j] = 1+lcs(s1,s2,i-1,j-1);    // match
//         return dp[i][j] = max(lcs(s1,s2,i-1,j),lcs(s1,s2,i,j-1));   // not match
//     }
//     int longestCommonSubsequence(string text1, string text2) {
//         memset(dp,-1,sizeof(dp));
//         return lcs(text1,text2,text1.length()-1,text2.length()-1); 
//     }
// };

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};
