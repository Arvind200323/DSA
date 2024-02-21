class Solution {
public:
    string simplifyPath(string path) {
        // stack<char> stack;
        // for(int i=0;i<path.size();i++){
        //     stack.push(path[i]);
        //     if(path[i]=='/' && path[i+1]=='/') stack.pop();
        //     else if(path[i]=='.') stack.pop();
        //     else if(i==path.size()-1 && path[i]=='/') stack.pop();
        // }
        // string ans;
        // while(!stack.empty()){
        //     ans += stack.top();
        //     stack.pop();
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;

        stack<string> stack;
        for(int i=0;i<path.size();i++) {
            if(path[i]=='/') continue;
            string temp;
            while(i<path.size() && path[i]!='/') {
                temp += path[i];
                i++;
            }
            if(temp==".") continue;
            else if(temp=="..") {
                if(!stack.empty()) stack.pop();
            }
            else stack.push(temp);
        }

        string ans;
        while(!stack.empty()) {
            ans = "/" + stack.top() + ans;
            stack.pop();
        }
        if(ans.size() == 0) return "/";
        return ans;
    }
};
