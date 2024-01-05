class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int max, ans = 0, count = 0;
        while(count < k){
            max = 0;
            for(auto i=m.begin(); i!=m.end(); i++){
                if(i->second > max){
                    max= i->second;
                    ans = i->first;
                }
            }
            v.push_back(ans);
            m.erase(ans);
            count++;
        }

        return v;
    }
};

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         priority_queue<int> pq;
//         map<int,int> mpp;
//         vector<int> ans;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             mpp[nums[i]]++;
//         }
//         for(auto x:mpp){
//             pq.push(x.second);
//         }
//         for(auto x:mpp){
//             if(x.second==pq.top()){
//                 ans.push_back(x.first);
//                 pq.pop();
//             }
//             k--;
//             if(k==0) break;
//         }
        
//         return ans;
//     }
// };
