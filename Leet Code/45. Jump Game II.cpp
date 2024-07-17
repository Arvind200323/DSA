class Solution {
public:
    int dp[10001];
    int func(vector<int>& nums,int i){
        if (i>=nums.size()-1) return 0;
        if (dp[i]!=-1) return dp[i];
        int minJumps = nums.size()+1;
        for (int j=1;j<=nums[i];j++){
            int jumps = 1+func(nums,i+j);
            minJumps = min(minJumps,jumps);
        }
        return dp[i] = minJumps;
    }
    int jump(vector<int>& nums){
        memset(dp,-1,sizeof(dp));
        return func(nums,0);
    }
};
