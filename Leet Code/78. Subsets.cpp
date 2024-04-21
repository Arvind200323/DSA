class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void func(vector<int>& arr, int i){
        if(i>=arr.size()){
            ans.push_back(temp);
            return;
        }
        // to include element
        temp.push_back(arr[i]);
        func(arr,i+1);
        // to not include element
        temp.pop_back();
        func(arr,i+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        func(nums,0);
        return ans;
    }
};
