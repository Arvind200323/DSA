class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int> mpp;
        string ans="";
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        for(auto x:mpp){
            pair<int,char> p;
            p.first = x.second;
            p.second = x.first;
            pq.push(p);
        }
        while(!pq.empty()){
            int x = pq.top().first;
            while(x--){
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};
