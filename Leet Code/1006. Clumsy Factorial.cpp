class Solution {
public:
    int clumsy(int n) 
    {
        stack<int>st;
        int flag = 0;
        st.push(n--);
        while(n > 0){
            if(flag == 0){
                int temp = st.top();
                st.pop();
                st.push(temp*n);
                n--;
            }
            else if(flag == 1){
                int temp = st.top();
                st.pop();
                st.push(temp/n);
                n--;
            }
            else if(flag == 2){
                st.push(n);
                n--;
            }
            else{
                st.push(-1*n);
                n--;
            }
            flag = (flag + 1)%4;
        }
        int ans = 0;
        while(!st.empty())
        {
           ans += st.top();
           st.pop();
        }    
        return ans;
    }
};
