class Solution {
public:
//     bool func(vector<int> nums, int i){
//         if(i==nums.size()-1) return true;
//         if(i>=nums.size()) return false;
//         for(int j=1;j<=nums[i];j++){
//             if(func(nums, i+j)) return true;
//         }
//         return false;
//     }
    int dp[10001];
    bool func(vector<int>& nums, int i) {
        if(i==nums.size()-1) return true;
        if(i>=nums.size()) return false;
        if(dp[i]!=-1) return dp[i];
        for(int j=1;j<=nums[i];j++){
            if(func(nums, i+j)) return dp[i]=1;
        }
        return dp[i] = 0;
    }
    bool canJump(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return func(nums, 0);
    }
};
