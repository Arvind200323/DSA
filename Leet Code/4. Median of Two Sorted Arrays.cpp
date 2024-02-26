class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(auto x: nums1) merge.emplace_back(x);
        for(auto x: nums2) merge.emplace_back(x);

        sort(merge.begin(), merge.end());
        
        int n = merge.size();
        double ans;

        if(n % 2 != 0) ans = merge[n/2];
        else ans = (merge[n/2-1] + merge[n/2]) / 2.0;

        return ans;
    }
};
