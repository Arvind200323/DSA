class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> mpp;
        for(int i=1;i<=n;i++){
            mpp[i]++;
        }
        for(auto x:nums) mpp[x]--;

        int duplicate=0,missing=0;
        for(auto x:mpp){
            if(x.second == -1)duplicate = x.first;
            if(x.second == 1)missing = x.first;
        }

        return {duplicate,missing};
    }
