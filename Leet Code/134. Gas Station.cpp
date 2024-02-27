class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas=0, tot_cost=0;
        int start_pos=0, tank=0, count=0;
        for(int i=start_pos;i<gas.size();i++){
            tot_cost += cost[i];
            tot_gas += gas[i];
            tank += gas[i]-cost[i];
            if(tank<0){
                start_pos=i+1;
                tank=0;
            }
        }
        if(tot_cost>tot_gas) return -1;
        else return start_pos;
    }
};
