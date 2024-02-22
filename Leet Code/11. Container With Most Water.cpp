class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        // for(int i=0;i<n-1;i++){
        //     int h1 = height[i];
        //     for(int j=i+1;j<n;j++){
        //         int h2 = height[j];
        //         int dist = j-i;
        //         int area = min(h1,h2) * dist;
        //         ans = max(ans,area);
        //     }
        // }
        int left = 0, right = n-1;
        while(left<right){
            int area = min(height[left],height[right]) * (right-left);
            ans = max(area, ans);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
