class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp.push_back(1);
        ans.push_back(temp);
        for(int i=1;i<numRows;i++){
            temp.push_back(0);
            for(int j=i;j>0;j--){
                temp[j]=temp[j]+temp[j-1];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
