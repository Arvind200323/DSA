class Solution {
public:
    string makeGood(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        stack<char> st;
        string ans;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && (abs(st.top()-s[i]) == 32)) st.pop();
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
