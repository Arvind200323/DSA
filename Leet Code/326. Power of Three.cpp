class Solution {
public:
    // int val = 1;
    bool func(int n){
        // if(val == n) return true;
        // else if(val > n) return false;
        // val *= 3;
        if(n==0) return false;
        else if(n==1) return true;
        return n%3==0 && func(n/3);
    }
    bool isPowerOfThree(int n) {
        return func(n);
    }
};
