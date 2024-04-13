class Solution {
public:
    string s = "0";
    int count = 1; 

    void func(int n) {
        if(count == n) return;
        string temp = s;
        for(int i=0; i<temp.length(); i++) {
            if(temp[i] == '0') temp[i] = '1';
            else temp[i] = '0';
        }
        reverse(temp.begin(), temp.end());
        s = s + "1" + temp;
        count++;
        func(n);
    }

    char findKthBit(int n, int k) {
        if(n == 1)  return '0'; 
        func(n);
        char ans = s[k-1];
        return ans;
    }
};
