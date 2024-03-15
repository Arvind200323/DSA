class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> ans;
        // int n = n;
        // for(int i=0;i<n;i++){
        //     int prod = 1;
        //     int j = 0;
        //     while(j<n){
        //         if(i!=j){
        //             prod *= nums[j];
        //         }
        //         j++;
        //     }
        //     ans.push_back(prod);
        // }
        // return ans;

        int n = nums.size();

        vector<int> left(n);
        vector<int> right(n);
        vector<int> ans(n);

        left[0] = nums[0];
        for(int i=1;i<n;i++){
            left[i] = nums[i]*left[i-1];
        }

        right[n-1] = nums[n-1];
        for(int i=n-2;i >0;i--){
            right[i] = nums[i]*right[i+1];
        }

        ans[0] = right[1];
        ans[n-1] = left[n-2];
        for(int i=1;i<n-1;i++){
            ans[i] = left[i-1]*right[i+1];
        }
        
        return ans;
    }
};
