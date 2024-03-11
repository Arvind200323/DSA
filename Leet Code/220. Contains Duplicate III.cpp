class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(abs(i-j) <= indexDiff && abs(nums[i]-nums[j]) <= valueDiff){
        //             return true;
        //         }
        //     } 
        // }
        // return false;

        // int left=0, right=1;
        // while(left<right && right<nums.size()){
        //     if(abs(left-right) <= indexDiff){
        //         if(abs(nums[left]-nums[right]) <= valueDiff) return true;
        //         right++;
        //     }
        //     else left++;
        // }
        // return false;

        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(i>indexDiff) st.erase(nums[i-indexDiff-1]);
            auto lb=st.lower_bound(nums[i]-valueDiff);
            if(lb!=st.end() && *lb-nums[i]<=valueDiff) return true;
            st.insert(nums[i]);
        }
        return false;
    }
};
