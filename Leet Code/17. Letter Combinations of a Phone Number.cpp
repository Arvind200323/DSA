class Solution {
public:
    vector<string> res;
    unordered_map<char,string> mpp = {{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
    void func(string digits,int i,string curr){
        if(digits=="") return;
        if(curr.length()==digits.length()){
            res.push_back(curr);
            return;
        }
        for(int j=0;j<mpp[digits[i]].size();j++){
            func(digits,i+1,curr+mpp[digits[i]][j]);
        }
    }
    vector<string> letterCombinations(string digits){
       func(digits,0,"");
       return res;
    }
};
