class Solution {
public:
    int climbStairs(int n) {
        int ans;
        if(n==1) ans=1;
        else if(n==2) ans=2;
        else if(n>2){
            int a=1;
            int b=2;
            for(int i=2;i<n;i++){
                ans=a+b;
                a=b;
                b=ans;
            }
        }
        return ans;
    }
};
