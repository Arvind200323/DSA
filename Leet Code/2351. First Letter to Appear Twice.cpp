class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mpp;
        char ans;
        int flag=0;
        for(auto x:s){
            mpp[x]++;
            if(mpp[x]==2){
                ans=x;
                break;
            }
        }
        return ans;
    }
};
