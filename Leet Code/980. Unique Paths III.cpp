class Solution {
public:
    int func(vector<vector<int>>&grid,int m,int n,int empty){
        if(m>=grid.size() || n>=grid[0].size()) return 0;
        if(grid[m][n]==-1) return 0;
        if(grid[m][n]==2){
            if(empty==-1) return 1;
            else return 0;
        }
        grid[m][n]=-1;
        empty--;
        int ans=func(grid,m+1,n,empty) + func(grid,m-1,n,empty) + func(grid,m,n+1,empty) + func(grid,m,n-1,empty);
        grid[m][n]=0;
        empty++;
        return ans;
    }
    int uniquePathsIII(vector<vector<int>>& grid){
        int empty=0;
        int m=0;
        int n=0;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size(); j++){
                if (grid[i][j]==0) empty++;
                else if (grid[i][j] == 1){
                    m=i;
                    n=j;
                }
            }
        }
        return func(grid,m,n,empty);
    }
};
