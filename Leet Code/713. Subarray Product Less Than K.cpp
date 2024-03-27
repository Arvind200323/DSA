class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int left = 0;
        int curr = 1;
        int ans = 0;
        if(k <= 1) return 0;
        for(int right=0;right<nums.size();right++){
            curr *= nums[right];
            while(curr >= k){
                curr /= nums[left];
                left++;
            }
            ans += right-left+1;
        }
        return ans;
    }
};
