class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> mpp;
        string ans="";
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        for(auto x:mpp) pq.push({x.second,x.first});
        while(!pq.empty()){
            int a = pq.top().second;
            int count=pq.top().first;
            while(count--){
                ans+=a;
            }
            pq.pop();
        }
        return ans;
    }
};
