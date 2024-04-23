class Solution {
public:
    int dp[101];
    int func(int i,vector<int>& arr){
        if(i<0) return 0;
        if(dp[i]>=0) return dp[i];
        int in = func(i -2, arr);
        int out = func(i-1, arr);
        return dp[i] = max(in+arr[i], out); 
    }

    int rob(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return func(nums.size()-1, nums);
    }
};
