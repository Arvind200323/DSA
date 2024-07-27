class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        vector<int> dp(nums.size(),1);
        for(int i=nums.size()-1;i>=0;i--){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        for(auto x:dp) ans=max(ans,x);
        return ans;
    }
};
