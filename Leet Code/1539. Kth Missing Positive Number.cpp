class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        for(auto x:arr) mpp[x]++;
        
        int ans = 0, i = 1;
        while(ans==0){
            if(mpp[i]==0) k--;
            if(k==0) ans = i;
            i++;
        }
        return ans;
    }
};
