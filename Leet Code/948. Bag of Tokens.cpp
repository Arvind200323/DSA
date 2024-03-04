class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int left = 0, right = tokens.size()-1;
        int ans = 0, curr = 0;
        while(left <= right){
            if(power >= tokens[left]){
                power -= tokens[left];
                curr++;
                left++;
            }else{
                power += tokens[right];
                curr--;
                right--;
            }
            if(curr < 0) break;
            ans = max(ans, curr);
        }
        return ans;
    }
};
