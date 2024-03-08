class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int max = 1, count = 0;
        for(auto x:nums) mpp[x]++;
        for(auto x:mpp) if(max < x.second) max = x.second;
        for(auto x:mpp) if(max == x.second) count++;
        return max * count;
    }
};
