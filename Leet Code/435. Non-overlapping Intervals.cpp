class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        sort(intervals.begin(),intervals.end());
        int prev = 0;
        int ans = 0;
        for(int curr=1;curr<intervals.size();curr++){
            if(intervals[curr][0]<intervals[prev][1]){
                ans++;
                if(intervals[curr][1]<=intervals[prev][1]) prev=curr;
            } 
            else prev=curr;
        }
        return ans;
    }
};
