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
        vector<int> ans(n);

        int zero = 0;
        int prod = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) zero++;
            else prod *= nums[i];
        }
        
        for(int i=0;i<n;i++){
            if(zero==0) ans[i] = prod/nums[i];
            else{
                if(zero==1){
                    if(nums[i]==0) ans[i] = prod;
                    else ans[i]=0;
                }
            }
        }
        return ans;
    }
};
