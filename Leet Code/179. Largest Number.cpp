class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res;
        sort(nums.begin(),nums.end(),[&](int a,int b){
            string strA=to_string(a);
            string strB=to_string(b);
            if((strA+strB)>(strB+strA)) return true;
            return false;
        });
        if(nums[0]==0) return "0";
        for(auto x:nums) res+=to_string(x);
        return res;
    }
};
