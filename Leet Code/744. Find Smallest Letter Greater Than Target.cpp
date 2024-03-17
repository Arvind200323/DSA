class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int low=0, high=letters.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(letters[mid] > target) high=mid-1;
            else low=mid+1;
        }
        if(low >= 0 && low < letters.size()) return letters[low];
        else return letters[0];
    }
};
