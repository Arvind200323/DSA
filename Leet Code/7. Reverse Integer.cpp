class Solution {
public:
    int reverse(int x) {
        long long int revNum = 0;
        while(x){
           int lastDigit=x%10;
           x=x/10;
           revNum=(revNum*10)+lastDigit;
        }
        if(revNum>INT_MAX || revNum<INT_MIN) return 0;
        return revNum;
    }
};
