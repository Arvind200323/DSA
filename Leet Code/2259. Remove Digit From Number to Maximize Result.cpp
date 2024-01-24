class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.size();
        string ans = "";
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                string s = number.substr(0,i) + number.substr(i+1);
                ans = max(ans,s);
            }
        }
        return ans;
    }
};
   
// class Solution {
// public:
//     string removeDigit(string number, char digit) {
//         long long maxi=INT_MIN,k=0;
//         for(int i=0;i<number.size();i++){
//             stringstream ss;
//             if(number[i]==digit){
//                 string temp=number;
//                 // string t=
//                 // k=stoi(t);
//                 // cout<<temp.erase(i,1)<<endl;
//                 ss<<temp.erase(i,1);
//                 ss>>k;
//                 // cout<<k<<endl;
//                 maxi=max(k,maxi);
//             }
//             ss.clear();
//         }
//         return to_string(maxi);
//     }
// };
