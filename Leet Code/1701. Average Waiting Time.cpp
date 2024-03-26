class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        double n = customers.size();
        double tot_time = 0;
        int wait = 0;
        for(int i=0;i<n;i++){
            int arrival = customers[i][0];
            int time = customers[i][1];
            if(arrival > wait){
                int total = arrival + time;
                wait = total;
                tot_time += total - arrival;
            }
            else{
                int total = wait + time;
                wait = total;
                tot_time += total - arrival;
            }
        }
        double ans = tot_time/n;
        return ans;
    }
};
