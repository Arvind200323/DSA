class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mpp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto x:arr) mpp[x]++;
        for(auto x:mpp) pq.push({x.second,x.first});
        while(true){
            int a = pq.top().first;
            if(a<=k) {
                k -= a;
                pq.pop();
            } 
            else break;
        }
        return pq.size();
    }
};
