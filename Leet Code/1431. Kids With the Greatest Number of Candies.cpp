class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxEle = candies[0];
        int n = candies.size();
        for(int i=0;i<n;i++){
            if(candies[i] > maxEle){
                maxEle = candies[i];
            }
        } 
        vector<bool> res;
        for(int i=0;i<n;i++){
            int x = candies[i];
            x += extraCandies;
            if(x >= maxEle){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};
