class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++) {
            if(s[i] == '(') st.push(s[i]);
            else if(s[i] == ')'){
                if(!st.empty()) st.pop();
                else continue;
            }
            ans += s[i];
        }
        int j=ans.size()-1;
        while(!st.empty() && j>=0) {
            if(ans[j] == '(') {
                ans.erase(ans.begin()+j);
                st.pop();
            }
            j--;
        }
        return ans;
    }
};
