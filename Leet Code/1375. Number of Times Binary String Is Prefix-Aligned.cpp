Solution 1:
class Solution {
public:
    int numTimesAllBlue(std::vector<int>& flips) {
        int n = flips.size(), align = 0;
        vector<int> bstr(n, 0);
        for(int i=0;i<n;i++) {
            bstr[flips[i]-1] = 1; 
            bool isPrefix = true;
            for(int j=0;j<=i;j++) {
                if(bstr[j]==0){
                    isPrefix = false;
                    break;
                }
            }
            if(isPrefix) align++;
        }
        return align;
    }
};
__________________________________________________________
Solution 2:
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        int moves=0;
        int right = 0; 
        for(int i=0; i<flips.size(); i++){
            right = max(right, flips[i]);
            if(right == i+1){
                moves++;
            }
        }
        return moves;
    }
};
