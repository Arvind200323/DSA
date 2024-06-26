class Solution {
public:
    int dp[101][101];
    int func(int i,int j,int m,int n){
        if(i>=m || j>=n) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = func(i+1,j,m,n) + func(i,j+1,m,n);
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,m,n);
    }
};
