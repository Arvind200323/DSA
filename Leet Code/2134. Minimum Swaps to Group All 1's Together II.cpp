class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int tot=0;
        int ans=INT_MAX,curr=0;
        for(auto x:nums){
            if(x==1) tot++;
        }
        for(int i=0;i<tot;i++){
            if(nums[i]==0) curr++;
        }
        int i=0,j=tot-1;
        while(i<nums.size()){
            ans=min(ans,curr);
            if(nums[i]==0) curr--;
            i++; j++; 
            if(j>=nums.size()) j-=nums.size();
            if(nums[j]==0) curr++;
        }
        return ans;
    }
};
