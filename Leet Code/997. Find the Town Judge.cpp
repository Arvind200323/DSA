class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mpp1,mpp2;
        for(int i=0;i<trust.size();i++) {
            mpp1[trust[i][0]]++;
            mpp2[trust[i][1]]++;
        }

        // for(int i=0;i<trust.size();i++)
        // cout<<trust[i][0]<<"->"<<mpp1[trust[i][0]]<<"||"<<trust[i][1]<<"->"<<mpp2[trust[i][1]]<<endl;
        
        for(int i=0;i<trust.size();i++){
            if(mpp1[trust[i][1]]==0 && mpp2[trust[i][1]]==n-1){
                return trust[i][1];
            }
        }
        if(n==1) return n;
        return -1;
    }
};
