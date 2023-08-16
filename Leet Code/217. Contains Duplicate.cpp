class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(mpp[nums[i]]>1){
                flag = true;
                break;
            }
        }
        return flag;
    }
};
