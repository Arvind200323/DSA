// BRUTE FORCE
class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        for(int i=0;i<height.size();i++){
            int leftMax=-1,rMax=-1;
            for(int j=i;j>=0;j--){
                leftMax=max(leftMax,height[j]);
            }
            for(int j=i;j<height.size();j++){
                rMax=max(rMax,height[j]);
            }
            ans+=min(leftMax,rMax)-height[i];
        }
        return ans;
    }
};

// BETTER
class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefix(height.size()), suffix(height.size());
        int ans=0;
        for(int i=0;i<height.size();i++){
            if(i==0) prefix[i]=height[i];
            else prefix[i]=max(height[i],prefix[i-1]);
        }
        for(int i=height.size()-1;i>=0;i--){
            if(i==height.size()-1) suffix[i]=height[i];
            else suffix[i]=max(height[i],suffix[i+1]);
        }
        for(int i=0;i<height.size();i++){
            ans+=min(prefix[i],suffix[i])-height[i];
        }
        return ans;
    }
};

// OPTIMAL
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int ans=0;
        int maxl=0, maxr=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=maxl) maxl=height[l];
                else ans+=maxl-height[l];
                l++;
            }
            else{
                if(height[r]>=maxr) maxr=height[r];
                else ans+=maxr-height[r];
                r--;
            }
        }
        return ans;
    }
};

