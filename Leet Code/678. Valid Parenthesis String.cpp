class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                leftMin++;
                leftMax++;
            }
            else if(s[i]==')'){
                leftMin--;
                leftMax--;
            }
            else if(s[i]=='*'){
                leftMin--;
                leftMax++;
            }
            if(leftMax<0) return false;
            if(leftMin<0) leftMin = 0;
        }
        if(leftMin == 0) return true;
        else return false;
    }
};
