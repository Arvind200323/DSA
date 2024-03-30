class Solution {
public:
    int subarr(vector<int>& nums, int k){
        unordered_map<int,int> mpp;
        int left = 0;
        int ans = 0;
        for(int right=0;right<nums.size();right++){
            mpp[nums[right]]++;
            while(mpp.size()>k){
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0) mpp.erase(nums[left]);
                left++;
            }
            ans += right-left+1;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        return subarr(nums,k) - subarr(nums,k-1);
    }
};
