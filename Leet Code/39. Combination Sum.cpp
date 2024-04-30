class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;
    void func(int i, int t, vector<int>& arr){
        if(i == arr.size()){
            if(t == 0) ans.push_back(subset);
            return;
        }
        if(arr[i] <= t){
            subset.push_back(arr[i]);
            func(i, t-arr[i], arr); // when picked
            subset.pop_back();
        }
        func(i+1, t, arr); // when not picked
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        func(0, target, candidates);
        return ans;
    }
};
