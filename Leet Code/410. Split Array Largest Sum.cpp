class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        // vector<int> prefix (nums.size());
        // for(int i=0;i<nums.size();i++){
        //     if(i==0) prefix[i]==nums[i];
        //     else prefix[i]=prefix[i-1]+nums[i];
        // }

        // int left = 1, right = nums.size()-1;
        // int ans = INT_MAX;
        // while(left!=right-1){
        //     int temp = INT_MIN;
        //     temp = max(prefix[left],prefix[right]-prefix[left]);
        //     cout<<prefix[left]<<"||"<<prefix[right]-prefix[left]<<endl;
        //     ans = min(temp,ans);
        //     left++;
        // }
        // return ans;

        int left = 0;
        int right = 0;
        for(auto x:nums){
            left = max(left,x);
            right += x;
        }
        while (left < right){
            int mid = left + (right - left) / 2;
            int count = 1;
            int sum = 0;
            for(auto x:nums){
                sum += x;
                if (sum > mid){
                    count++;
                    sum = x;
                }
            }
            if (count <= k) right = mid;
            else left = mid + 1;
        }
        return left;
    }
};
