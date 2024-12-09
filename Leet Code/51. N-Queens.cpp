class Solution {
public:
    vector<vector<string>> res;
    bool isSafe(int row,int col,vector<string>& board,int n){
        int r=row,c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
            c--;
        }
        r=row,c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
        }
        r=row,c=col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
            c++;
        }
        return true;
    }
    void func(int row,vector<string>& board,int n){
        if(row==n){
            res.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                func(row+1,board,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        string s(n,'.');
        vector<string> board(n,s);
        func(0,board,n);
        return res;
    }
};
