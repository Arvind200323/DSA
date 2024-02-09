class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size()>0){
            int back = stoi(string(1,num.back()));
            if(back%2==0) num.pop_back();
            else break;
        }
        return num;
    }
};
