class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int ans=0,flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                ans++;
                flag=1;
            }
            else if(s[i]==' ' && flag==1) break;
        }
        return ans;
    }
};
