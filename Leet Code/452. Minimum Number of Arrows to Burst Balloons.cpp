class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        sort(points.begin(), points.end());
        int y = points[0][1];
        int ans = 1;
        for(int i=1;i<points.size();i++) {
            if(points[i][0] > y) {
                ans++;
                y = points[i][1];
            }
            y = min(points[i][1],y);
        }
        return ans;
    }
};
