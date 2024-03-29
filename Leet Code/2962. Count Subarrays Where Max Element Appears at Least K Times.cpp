class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int maxy = *max_element(nums.begin(),nums.end());
        long long ans = 0;
        int count = 0;
        int left = 0, right = 0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==maxy) count++;
            while(count>=k){
                ans += nums.size()-right;
                if(numsa[left]==maxy) count--;
                left++;
            }
        }
        return ans;
    }
};
