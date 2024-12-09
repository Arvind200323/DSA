class Solution {
public:
    int vis[7][7];
    bool dfs(int r,int c,int i,vector<vector<char>>& board,string word){
        if(i==word.length()) return true;
        if(r<0 || r>=board.size() || c<0 || c>=board[0].size() || board[r][c]!=word[i] || vis[r][c]) return false;
        vis[r][c]=1;
        bool res = dfs(r+1,c,i+1,board,word) || dfs(r-1,c,i+1,board,word) || dfs(r,c+1,i+1,board,word) || dfs(r,c-1,i+1,board,word);
        vis[r][c]=0;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(dfs(i,j,0,board,word)) return true;
            }
        }
        return false;
    }
};
