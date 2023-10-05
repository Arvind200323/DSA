// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         vector<int> ans;
//         unordered_map<int,int> mpp;
//         for(int i=0;i<nums.size();i++){
//             mpp[nums[i]]++;
//         }
//         for(int i=0;i<nums.size();i++){
//             if(mpp[i]>=nums.size()/3){
//                 int c=0;
//                 if(c != nums[i]){
//                     ans.push_back(nums[i]);  
//                 }
//                 c=nums[i];
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num: nums) mp[num]++;
        vector<int> result;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second * 3 > nums.size()) result.push_back(it->first);
        }
        return result;
    }
};
