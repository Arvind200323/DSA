class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int p=0,q=0;
        for(int i=0;i<=n;i++){
            p=p+i;
        }
        for(int i=0;i<n;i++){
            q=q+nums[i];
        }
        return p-q;
    }
};
