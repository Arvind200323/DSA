class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        int curr = 0, ans = 0;
        for(int right=0;right<n;right++){
            if(right==0) curr = nums[right];
            else{
                curr += nums[right];
                if(nums[right]<=nums[right-1]){
                    curr = nums[right];
                }
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};
