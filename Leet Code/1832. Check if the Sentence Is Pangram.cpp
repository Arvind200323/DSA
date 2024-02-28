class Solution {
public:
    bool checkIfPangram(string s) {
        int hasharr[26] = {0};
        for(int i=0;i<s.length();i++){
            hasharr[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(hasharr[i]==0) return false;
        }
        return true;
    }
};
