class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        // BRUTE FORCE : 
        vector<int> temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        int left=0,right=temp.size()-1;
        while(left<=right){
            if(temp[left]!=nums[left] && temp[right]!=nums[right]){
                break;
            }
            if(temp[left]==nums[left]){
                left++;
            }
            if(temp[right]==nums[right]){
                right--;
            }
        }
        if(left<=right) return right-left+1;
        else return 0;

        // OPTIMAL APPROACH : 
        // run the loop while we are getting increasing sequence from left
        int left = 0;
        while(left<nums.size()-1 && nums[left]<=nums[left+1]){
            left++;
        }
        // run the loop while we are getting decreasing sequence from right
        int right = nums.size() - 1;
        while(right>0 && nums[right]>=nums[right-1]){
            right--;
        }
        // if the array is already sorted
        if(left>=right) return 0;
        cout<<"before:"<<left<<","<<right<<endl;
        // find the smallest and largest element between [left, right]
        int small = nums[left];
        int large = nums[right];
        for(int i=left;i<=right;i++){
            small = min(small,nums[i]); 
            large = max(large,nums[i]);
        }
        cout<<"small & large:"<<small<<","<<large<<endl;
        // find the correct position for smallest on left side
        while(left>=0 && nums[left]>small){
            left--;
        }
        // find the correct position for largest on right side
        while(right<nums.size() && nums[right]<large){
            right++;
        }
        cout<<"after:"<<left<<","<<right<<endl;
        return right-left-1;
    }
};
