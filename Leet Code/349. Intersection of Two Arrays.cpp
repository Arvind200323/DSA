class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        vector<int> ans;
        for(auto x:nums1){
            st.insert(x);
        }
        for (auto x:nums2){
            if(st.count(x)){
                ans.push_back(x);
                st.erase(x); 
            }
        }
        return ans;
    }
};
