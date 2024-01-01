class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> max_pq;
        for(auto x : nums){
            max_pq.push(x);
        }
        vector<int>max;
        int ans=0;
        while(k--){
            ans=max_pq.top();
            max_pq.pop();
        }
        return ans;
    }
};
