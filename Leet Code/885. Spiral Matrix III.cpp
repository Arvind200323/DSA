class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        vector<vector<int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
        int d=0, steps=0;
        int row=rStart, col=cStart;
        while(ans.size()<rows*cols){
            if(d==0 || d==2) steps++;
            for(int j=0;j<steps;j++){
                if(row<rows && row>=0 && col<cols && col>=0){
                    ans.push_back({row,col});
                }
                row+=dirs[d][0];
                col+=dirs[d][1];

            }
            d=(d+1)%4;
        }
        return ans;
    }
};
