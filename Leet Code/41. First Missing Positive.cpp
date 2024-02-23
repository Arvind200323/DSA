class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=0, i=1;
        unordered_map<int,int> mpp;
        for(auto x:nums) mpp[x]++;
        while(ans==0){
            if(mpp[i]==0) ans=i;
            else i++;
        }
        return ans;
    }
}; 
