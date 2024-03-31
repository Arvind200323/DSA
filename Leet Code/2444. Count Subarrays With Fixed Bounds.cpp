class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int left=0;
        int curr=0;
        long long ans=0;
        int maxIdx=-1, minIdx=-1;
        for(int right=0; right<nums.size(); right++){
            if(nums[right]<minK || nums[right]>maxK){
                left=right+1; 
                continue;
            }
            if(nums[right]==maxK) maxIdx=right; 
            if(nums[right]==minK) minIdx=right; 
            curr = min(maxIdx, minIdx)-left+1;
            ans += max(curr,0);
        }
        return ans;
    }
};
