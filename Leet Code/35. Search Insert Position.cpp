class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=0;
         int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans= i;
            }
        if(nums[j]<target){
                j++;
        }
        else if(nums[j]>target){
            ans=j;
        }
        if(target>nums[n-1]){
            ans=n;
        }
        }
        return ans;
    }
};
