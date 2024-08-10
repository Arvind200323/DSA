class Solution {
public:
    int dp[366];
    int solve(vector<int> &days,vector<int> &cost,int index){
    if(index>=days.size()) return 0;
    if(dp[index]!=-1) return dp[index];

    int opt1=cost[0]+solve(days,cost,index+1);

    int i;
    for(i=index;i<days.size();i++){
        if(days[i]<days[index]+7) continue;
        else break;
    };
    int opt2=cost[1]+solve(days,cost,i);

    for(i=index;i<days.size();i++){
        if(days[i]<days[index]+30) continue;
        else break;
    }
    int opt3=cost[2]+solve(days,cost,i);

    return dp[index]=min(opt3,min(opt1,opt2));;
    }
    int mincostTickets(vector<int>& days, vector<int>& costs){
        memset(dp,-1,sizeof(dp));
        return solve(days,costs,0); 
    }
};
