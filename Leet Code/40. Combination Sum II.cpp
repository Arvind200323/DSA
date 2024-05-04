class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ds;
    void func(int idx, vector<int>& arr, int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            func(i+1, arr, target-arr[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        func(0, candidates, target);
        return ans;
    }
};
