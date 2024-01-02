class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        int i=0;
        while(i<s.length()){
            if(s[i]==')' && stack.size()>0 && stack.top()=='(') stack.pop();
            else if(s[i]=='}' && stack.size()>0 && stack.top()=='{') stack.pop();
            else if(s[i]==']' && stack.size()>0 && stack.top()=='[') stack.pop();
            else stack.push(s[i]);
            i++;
        }      
        if(stack.size()==0) return true;
        return false;

        // stack<char> stack;
        // vector<char> bracket;
        // map<char,char> mpp;

        // mpp.insert({')','('});
        // mpp.insert({']','['});
        // mpp.insert({'}','{'});
        
        // int flag=0;
        // for(auto x:s){
        //     if(x=='(' || x=='[' || x=='{') stack.push(x);
        //     else{
        //         if(x==')' || x==']' || x=='}'){
        //             if(mpp[x]==stack.top()){
        //                 stack.pop();
        //                 flag=1;
        //             }
        //         }
        //     }
        // }
        // if(flag==1) return true;
        // else return false;

    }
};
