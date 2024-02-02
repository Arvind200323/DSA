class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;
        for (int i = 0; i < s.size(); i++) {
            string tmp = "";
            for (int j = i; j < s.size(); j++) {
                tmp += s[j];
                int val = stoi(tmp);
                if (low <= val && val <= high) {
                    ans.push_back(val);
                }
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
