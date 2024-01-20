class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        set<int> st;
        for(auto x:arr) mpp[x]++;
        for(auto x:mpp){
            st.insert(x.second);
        }
        if(st.size()==mpp.size()) return true;
        else return false;
    }
};
