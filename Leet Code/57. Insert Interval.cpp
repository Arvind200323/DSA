class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq(intervals.begin(), intervals.end());
        pq.push({newInterval[0], newInterval[1]});

        vector<vector<int>> ans;
        while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            
            if(ans.size() == 0){
                ans.emplace_back(x);
            }
            else{
                auto y = ans[ans.size()-1];
                if(x[0] <= y[1] || (x[0] >= y[0] && x[1] <= y[1])){
                    ans[ans.size()-1][0] = min(x[0], y[0]);
                    ans[ans.size()-1][1] = max(x[1], y[1]);
                }
                else ans.emplace_back(x);
            }
        }
        return ans;
    }
};

