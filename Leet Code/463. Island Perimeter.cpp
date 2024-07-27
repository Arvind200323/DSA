class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    peri+=4;
                    if(i>0 && grid[i-1][j]==1) peri--;
                    if(i<grid.size()-1 && grid[i+1][j]==1) peri--;
                    if(j>0 && grid[i][j-1]==1) peri--;
                    if(j<grid[i].size()-1 && grid[i][j+1]==1) peri--;
                }
            }
        }
        return peri;
    }
};
