class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void func(vector<int>& arr, int i) {
        if (i >= arr.size()) {
            ans.push_back(temp);
            return;
        }
        
        // Count the freq of the current element
        int count = 1;
        while (i+count < arr.size() && arr[i+count] == arr[i]) {
            count++;
        }
        
        // Choose 0 to count occurrences of the current element
        for (int j=0;j<=count;j++) {
            for (int k=0;k<j;k++) {
                temp.push_back(arr[i]); // Include the current element
            }
            func(arr, i + count); // Recur with the next element after duplicates
            for (int k=0;k<j;k++) {
                temp.pop_back(); // Backtrack
            }
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort to handle duplicates
        func(nums, 0);
        return ans;
    }
};
