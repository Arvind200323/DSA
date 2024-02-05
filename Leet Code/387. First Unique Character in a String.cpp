class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mpp;
        int ans=0, flag=0;
        for(int i=0;i<s.size();i++) mpp[s[i]]++;
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]==1){
                ans=i;
                flag=1;
                break;
            }
        }
        if(flag==0) return -1;
        else return ans;
    }
};
