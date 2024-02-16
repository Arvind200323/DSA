class Solution {
public:
    static long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long perimeter=0, sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum>nums[i]) perimeter=sum+nums[i];
            sum+=nums[i];
        }
        if(perimeter==0) return -1;
        else return perimeter;
    }
};
