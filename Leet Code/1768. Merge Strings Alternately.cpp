class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1, n2, n;
        string ans = "";
        n1 = word1.length();
        n2 = word2.length();
        n = min(n1, n2);
        for (int i = 0; i < n; i++){
            ans += word1[i];
            ans += word2[i];
        }
        if (n1 > n2){
            ans += word1.substr(n, n1-n);
        }
        else {
            ans += word2.substr(n, n2-n);
        }
        return ans;
    }
};
