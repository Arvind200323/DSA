class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int,int> mpp;
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        for (int i=0;i<n;i++) {
            if(nums[i] == 0) sum += -1;
            else sum += 1;

            if(sum == 0) ans = i + 1;
            else if(mpp.find(sum) != mpp.end()) ans = max(ans, i - mpp[sum]);
            else mpp[sum] = i;
        }
        return ans;
    }
};
