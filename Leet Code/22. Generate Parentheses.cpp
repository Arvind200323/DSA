class Solution {
public:
    vector<string> ans;
    string curr;

    void fun(int num, int open, int close){
        if(open == close && open == num){
            ans.push_back(curr);
            return;
        }
        if(open < num){
            curr.push_back('(');
            fun(num, open + 1, close);
            curr.pop_back();
        }
        if(close < open){
            curr.push_back(')');
            fun(num, open, close + 1);
            curr.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        fun(n, 0, 0);
        return ans;
    }
};
