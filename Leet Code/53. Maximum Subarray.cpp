class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int temp=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            temp=temp+nums[i];
            if(temp>ans) ans=temp;
            if(temp<0) temp=0;
        }
        return ans;
    }
};
