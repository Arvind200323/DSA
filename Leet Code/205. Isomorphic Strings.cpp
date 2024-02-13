class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mpp_s, mpp_t;
        for (int i=0; i<s.length(); i++) {
            if (mpp_s[s[i]] && mpp_s[s[i]]!=t[i]) return false;
            else if (mpp_t[t[i]] && mpp_t[t[i]]!=s[i]) return false;
            else{
                mpp_s[s[i]]=t[i];
                mpp_t[t[i]]=s[i];
            }
        }
        return true;
    }
};
