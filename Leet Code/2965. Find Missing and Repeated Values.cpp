class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mpp;
        int n = grid.size();
        for(int i=1;i<=n*n;i++) mpp[i]++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mpp[grid[i][j]]++; 
            }
        }
        int a=0,b=0;
        for(auto x:mpp) if(x.second==3) a = x.first;
        for(auto x:mpp) if(x.second==1) b = x.first;
        return {a,b};
    }
};
