class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.count(nums[i])){ // check count >=1
                if(abs(i-mpp[nums[i]]<=k)){
                    return true;
                }
            }
            //if mpp dont have i (count=0)
            mpp[nums[i]]=i;
        }
        return false;
    }
};
