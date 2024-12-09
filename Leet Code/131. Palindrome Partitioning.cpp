class Solution {
public:
    vector<vector<string>> res;
    vector<string> temp;
    bool isPal(string s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }

    void func(string s,int i){
        if(i==s.length()){
            res.push_back(temp);
            return;
        }
        for(int j=i;j<s.length();j++){
            if(isPal(s,i,j)){
                temp.push_back(s.substr(i,j-i+1));
                func(s,j+1);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        func(s,0);
        return res;
    }
};
