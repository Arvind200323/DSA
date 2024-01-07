class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int prefix[n];
        for(int i=0;i<n;i++){
            if(i==0) prefix[i]=nums[i];
            else prefix[i]=prefix[i-1]+nums[i];
        }

        for(int i=0;i<n;i++){
            if(i==0){
                if(prefix[n-1]-prefix[i]==0)
                return 0;
                continue;
            }
            if(prefix[i-1] == prefix[n-1]-prefix[i])
            return i;
        }
        return -1;
    }
};
