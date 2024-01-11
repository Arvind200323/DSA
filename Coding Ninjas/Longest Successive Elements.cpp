int longestSuccessiveElements(vector<int>&a) {
    sort(a.begin(),a.end());
    int count=1, maxCount = 0, ans=0;
    set<int> st;
    for(auto x:a) st.insert(x);
    for(auto x:st) {
        if (st.count(x + 1) > 0) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
    ans=max(count,maxCount);
    
    return ans;
