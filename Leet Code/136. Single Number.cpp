class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            c=c^nums[i];  // using xor operator
        }
        return c;
    }
};
