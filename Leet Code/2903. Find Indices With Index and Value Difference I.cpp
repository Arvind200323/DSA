class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDiff, int valueDiff) {
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int idxDiff = abs(i-j);
                int valDiff = abs(nums[i]-nums[j]);
                if(idxDiff >= indexDiff && valDiff >= valueDiff) return {i,j};
            }
        }
        return {-1,-1};
    }
};
