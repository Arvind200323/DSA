class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string ans;
        while (ss >> words) {   
            if (ans!="") ans=words+" "+ans;
            else ans += words;
        }
        return ans; 
    }
};
