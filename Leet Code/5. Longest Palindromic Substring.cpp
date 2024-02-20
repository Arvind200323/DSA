// class Solution {
// public:
//     string longestPalindrome(string s) {
//         priority_queue<pair<int,string>> pq;
//         for(int i=0;i<s.size();i++){
//             string temp="";
//             for(int j=i;j<s.size();j++){
//                 temp += s[j];
//                 string rev = temp;
//                 reverse(rev.begin(),rev.end());
//                 if(temp==rev){
//                     pq.push({temp.size(),temp});
//                 }
//             }
//         }
//         string ans = pq.top().second;
//         return ans;
//     }
// };

class Solution {
public:
    int solve(string &s,int i,int j){
        while(i < j){
            if(s[i] != s[j])
               return false ;
            i++ ;
            j--;
        }  
        return true ;   
    }

    string longestPalindrome(string s){
       int n = s.size() ;
       string ans = "" ;
       int maxi = 1 ;
       ans.push_back(s[0]) ;
       for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                 if(solve(s,i,j)){
                      if(j-i+1 > maxi){
                          maxi = j-i+1 ;
                          cout<<maxi<<endl ;
                          ans = s.substr(i,maxi) ;
                      }
                 }
            }
       }
       return ans ;
    }
};



